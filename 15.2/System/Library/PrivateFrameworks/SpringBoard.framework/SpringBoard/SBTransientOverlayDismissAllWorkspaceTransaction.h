@interface SBTransientOverlayDismissAllWorkspaceTransaction : SBMainWorkspaceTransaction

@property (nonatomic, getter=isAnimatedOverride) long long animatedOverride;

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (BOOL)_canBeInterrupted;
- (id)initWithTransitionRequest:(id)a0;
- (void)_begin;

@end
