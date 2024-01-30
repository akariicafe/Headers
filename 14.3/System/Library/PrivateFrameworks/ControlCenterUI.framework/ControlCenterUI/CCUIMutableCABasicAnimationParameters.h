@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCABasicAnimationParameters : CCUICABasicAnimationParameters

@property (nonatomic) double duration;
@property (copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction;

- (void)setTimingFunction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDuration:(double)a0;

@end
