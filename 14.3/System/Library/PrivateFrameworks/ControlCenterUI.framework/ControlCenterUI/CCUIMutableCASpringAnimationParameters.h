@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction;

- (void)setStiffness:(double)a0;
- (void)setDamping:(double)a0;
- (void)setTimingFunction:(id)a0;
- (void)setMass:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
