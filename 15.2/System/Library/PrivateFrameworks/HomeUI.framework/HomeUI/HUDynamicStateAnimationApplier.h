@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier

@property (nonatomic) double initialProgress;
@property (nonatomic) double targetProgress;
@property (nonatomic) double preInterpolatedProgress;
@property (nonatomic) double lastTargetChangeTime;
@property (nonatomic) BOOL hasUpdatedProgress;
@property (readonly, copy, nonatomic) HUAnimationSettings *animationSettings;

- (void)updateProgress:(double)a0;
- (BOOL)start;
- (void).cxx_destruct;
- (id)initWithAnimationSettings:(id)a0 initialProgress:(double)a1 progressInputBlock:(id /* block */)a2;
- (double)effectiveInputProgressForBlock:(id /* block */)a0;

@end
