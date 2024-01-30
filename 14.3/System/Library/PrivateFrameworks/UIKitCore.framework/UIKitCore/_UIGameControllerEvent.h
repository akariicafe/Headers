@interface _UIGameControllerEvent : UIEvent {
    struct { unsigned long long senderID; double controllerState[16]; double normalizedLeftStickState[4]; double normalizedRightStickState[4]; double normalizedShoulderButtonState[4]; } _previousState;
    unsigned long long _activeComponent;
}

- (void)_reset;
- (long long)subtype;
- (void)_sendEventToResponder:(id)a0;
- (BOOL)_processLeftStick:(struct { unsigned long long x0; double x1[16]; double x2[4]; double x3[4]; double x4[4]; } *)a0 pressesEvent:(id)a1 timestamp:(double)a2;
- (BOOL)_processRightStick:(struct { unsigned long long x0; double x1[16]; double x2[4]; double x3[4]; double x4[4]; } *)a0 pressesEvent:(id)a1 timestamp:(double)a2;
- (BOOL)_processStandardButtons:(struct { unsigned long long x0; double x1[16]; double x2[4]; double x3[4]; double x4[4]; } *)a0 pressesEvent:(id)a1 timestamp:(double)a2;
- (long long)type;
- (struct CGPoint { double x0; double x1; })_leftStickPosition;
- (void)_maybeConvertAndSendAsPressesEvent;
- (BOOL)_determineInputTypeAndProcess:(struct { unsigned long long x0; double x1[16]; double x2[4]; double x3[4]; double x4[4]; } *)a0 pressesEvent:(id)a1 timestamp:(double)a2;
- (BOOL)_processDPad:(struct { unsigned long long x0; double x1[16]; double x2[4]; double x3[4]; double x4[4]; } *)a0 pressesEvent:(id)a1 timestamp:(double)a2;
- (BOOL)_processShoulder:(struct { unsigned long long x0; double x1[16]; double x2[4]; double x3[4]; double x4[4]; } *)a0 pressesEvent:(id)a1 timestamp:(double)a2;

@end
