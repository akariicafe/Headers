@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)animationSettings;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0;
- (double)_animationDelay;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;

@end
