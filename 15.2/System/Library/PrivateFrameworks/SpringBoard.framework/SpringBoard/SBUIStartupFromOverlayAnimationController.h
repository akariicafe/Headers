@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_overlay;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;

- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (BOOL)_shouldDismissBanner;

@end
