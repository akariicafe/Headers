@class SBSceneLayoutAnimationWrapperView, BSAnimationSettings, UIView;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController {
    UIView *_internalContainerView;
    UIView *_blackView;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;

- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_setHidden:(BOOL)a0;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)_getTransitionWindow;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (BOOL)_shouldDismissBanner;
- (void)_showBlackView;

@end
