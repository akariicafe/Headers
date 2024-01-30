@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCABasicAnimationParameters : CCUICABasicAnimationParameters

@property (nonatomic) double duration;
@property (copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;

- (void)setTimingFunction:(id)a0;
- (void)setDuration:(double)a0;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;

@end
