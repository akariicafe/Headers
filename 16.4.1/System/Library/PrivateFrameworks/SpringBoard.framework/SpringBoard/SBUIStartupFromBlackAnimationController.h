@class NSString, SBDeviceApplicationSceneView, UIView, SBOrientationTransformWrapperView, BSAnimationSettings;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    UIView *_internalContainerView;
    UIView *_blackView;
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBDeviceApplicationSceneView *_sceneView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_getTransitionWindow;
- (void)_setHidden:(BOOL)a0;
- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (void)_startAnimation;
- (long long)sceneViewPresentationPriority:(id)a0;
- (void)_prepareAnimation;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_showBlackView;

@end
