#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  delay(1000);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(300);
}
