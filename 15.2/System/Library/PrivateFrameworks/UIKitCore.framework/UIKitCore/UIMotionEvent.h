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

- (void)_setSubtype:(long long)a0;
- (id)_windows;
- (int)_shakeState;
- (float)_highPass:(float)a0;
- (float)_lowPass:(float)a0;
- (long long)subtype;
- (void)_willSuspend;
- (BOOL)_detectWhenNotActive;
- (void)_sendEventToResponder:(id)a0;
- (id)description;
- (void)_willResume;
- (void)_enablePeakDetectionForScreenBlanked:(id)a0;
- (void).cxx_destruct;
- (long long)_feedStateMachine:(float)a0 currentState:(long long)a1 timestamp:(double)a2;
- (void)_enablePeakDetectionIfNecessary;
- (void)_updateAccelerometerEnabled;
- (void)_idleTimerFired;
- (id)_init;
- (BOOL)_isDetectingMotionEvents;
- (float)_determineShakeLevelX:(float)a0 y:(float)a1 z:(float)a2 currentState:(long long)a3;
- (long long)type;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)a0;
- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)dealloc;
- (void)_resetLowPassState;

@end
