@class BKSAccelerometer, NSTimer;

@interface UIMotionEvent : UIEvent {
    BKSAccelerometer *_motionAccelerometer;
    long long _subtype;
    long long _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer *_idleTimer;
    BOOL _sentMotionBegan;
    float _lowPassState[10];
    unsigned long long _lowPassStateIndex;
    unsigned long long _highPassStateIndex;
    float _highPassState[2];
    int notifyToken;
}

@property (nonatomic) int shakeState;

- (id)_windows;
- (long long)subtype;
- (BOOL)_isDetectingMotionEvents;
- (void)_setSubtype:(long long)a0;
- (void)_sendEventToResponder:(id)a0;
- (void)_enablePeakDetectionIfNecessary;
- (void)_resetLowPassState;
- (void).cxx_destruct;
- (void)_idleTimerFired;
- (void)dealloc;
- (BOOL)_detectWhenNotActive;
- (void)_enablePeakDetectionForScreenBlanked:(id)a0;
- (void)_willSuspend;
- (int)_shakeState;
- (long long)_feedStateMachine:(float)a0 currentState:(long long)a1 timestamp:(double)a2;
- (float)_highPass:(float)a0;
- (id)description;
- (long long)type;
- (void)_updateAccelerometerEnabled;
- (float)_lowPass:(float)a0;
- (id)_init;
- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)_willResume;
- (float)_determineShakeLevelX:(float)a0 y:(float)a1 z:(float)a2 currentState:(long long)a3;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)a0;

@end
