@class NSString, CAMediaTimingFunction;

@interface BSMutableAnimationSettings : BSAnimationSettings <BSAnimationSettingsMutating>

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) float speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDuration:(double)a0;

@end
