@class BKSDisplayRenderOverlay, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController {
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)animationSettings;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0;
- (void)_setHidden:(BOOL)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (id)_getTransitionWindow;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;

@end
