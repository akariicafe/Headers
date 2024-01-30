@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (void)_prepareAnimation;
- (double)_animationDelay;
- (void).cxx_destruct;
- (void)_cleanupAnimation;

@end
