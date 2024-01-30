@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings

@property (readonly, nonatomic) CASpringAnimation *springAnimation;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double completionEpsilon;

+ (id)criticallyDampedSpringSettings;

- (void)setTimingFunction:(id)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (double)speed;
- (void)setSpeed:(double)a0;
- (double)delay;
- (id)timingFunction;
- (void)setDelay:(double)a0;
- (void)setDuration:(double)a0;
- (void).cxx_destruct;
- (double)duration;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)repeatCount;
- (void)setRepeatCount:(float)a0;
- (void)_updateDuration;
- (double)interpolatedProgressForProgress:(double)a0;
- (id)_initWithSpringAnimation:(id)a0 completionEpsilon:(double)a1;

@end
