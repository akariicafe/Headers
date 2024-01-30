@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_overlay;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;

- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;

@end
