@class BKSDisplayRenderOverlay, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController {
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)animationSettings;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_setHidden:(BOOL)a0;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)_getTransitionWindow;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (BOOL)_shouldDismissBanner;

@end
