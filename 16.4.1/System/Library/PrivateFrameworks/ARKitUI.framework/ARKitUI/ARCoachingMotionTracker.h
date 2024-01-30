@interface ARCoachingMotionTracker : NSObject {
    void /* unknown type, empty encoding */ _velocities[5];
    void /* unknown type, empty encoding */ _lastPosition;
    double _lastTime;
    int _velocityIndex;
    double _lastThresholdBreakTime;
    int _thresholdBreakCount;
    BOOL _wasMoving;
}

@property (nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL didStartMoving;
@property (readonly, nonatomic) BOOL didStopMoving;

- (id)init;
- (void)clear;
- (void)updateWithFrame:(id)a0;
- (void /* unknown type, empty encoding */)calcAverageVelocity;

@end
