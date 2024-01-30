@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings

@property (readonly, nonatomic) CASpringAnimation *springAnimation;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double completionEpsilon;

+ (id)criticallyDampedSpringSettings;

- (void)setRepeatCount:(float)a0;
- (void)setDelay:(double)a0;
- (double)delay;
- (void)setTimingFunction:(id)a0;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)speed;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)setSpeed:(double)a0;
- (float)repeatCount;
- (id)init;
- (id)timingFunction;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (void)_updateDuration;
- (id)_initWithSpringAnimation:(id)a0 completionEpsilon:(double)a1;
- (double)interpolatedProgressForProgress:(double)a0;

@end
