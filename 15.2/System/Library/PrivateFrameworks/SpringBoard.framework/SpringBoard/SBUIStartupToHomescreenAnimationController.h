@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)animationSettings;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)_animationDelay;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;

@end
