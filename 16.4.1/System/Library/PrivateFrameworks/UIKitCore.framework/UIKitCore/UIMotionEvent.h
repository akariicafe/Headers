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

- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (id)_windows;
- (void)_willSuspend;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)a0;
- (BOOL)_isDetectingMotionEvents;
- (void)_willResume;
- (long long)subtype;
- (void)_enablePeakDetectionForScreenBlanked:(id)a0;
- (long long)_feedStateMachine:(float)a0 currentState:(long long)a1 timestamp:(double)a2;
- (void)_setSubtype:(long long)a0;
- (void)_updateAccelerometerEnabled;
- (long long)type;
- (void)_resetLowPassState;
- (id)_init;
- (int)_shakeState;
- (void)dealloc;
- (float)_lowPass:(float)a0;
- (void)_idleTimerFired;
- (float)_determineShakeLevelX:(float)a0 y:(float)a1 z:(float)a2 currentState:(long long)a3;
- (void)_sendEventToResponder:(id)a0;
- (float)_highPass:(float)a0;
- (id)description;
- (void)_enablePeakDetectionIfNecessary;
- (BOOL)_detectWhenNotActive;
- (void).cxx_destruct;

@end
