@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings

@property (readonly, nonatomic) CASpringAnimation *springAnimation;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double completionEpsilon;

+ (id)criticallyDampedSpringSettings;

- (void)setDelay:(double)a0;
- (float)repeatCount;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)setTimingFunction:(id)a0;
- (id)timingFunction;
- (double)speed;
- (double)delay;
- (id)init;
- (void)setSpeed:(double)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRepeatCount:(float)a0;
- (void)_updateDuration;
- (double)duration;
- (void)setDuration:(double)a0;
- (double)interpolatedProgressForProgress:(double)a0;
- (id)_initWithSpringAnimation:(id)a0 completionEpsilon:(double)a1;

@end
