@interface AnimationEngine : NSObject {
    struct MotionVector { float velocity; float position; } _currentMotionVector;
    float _targetValue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAnimationDriveTime;
    double _animationDuration;
    id /* block */ _animationBlock;
    unsigned long long _animationOptions;
    double _estimatedFramePeriodSeconds;
}

@property (nonatomic) float position;
@property (nonatomic) float velocity;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_resetAnimations;
- (void)animateWithDuration:(double)a0 toValue:(float)a1 animations:(id /* block */)a2 options:(unsigned long long)a3 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (void)driveAnimationAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withConstraints:(struct AnimationEngineAnimationConstraints { struct MotionConstraints { float x0; float x1; } x0; struct MotionConstraints { float x0; float x1; } x1; struct MotionConstraints { float x0; float x1; } x2; })a1 withMultiplier:(float)a2;

@end
