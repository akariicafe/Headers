@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;

- (void)setMass:(double)a0;
- (void)setDamping:(double)a0;
- (void)setStiffness:(double)a0;
- (void)setTimingFunction:(id)a0;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHighFrameRateReason:(unsigned int)a0;

@end
