@class NSString, SBSceneView, BKSDisplayRenderOverlay, SBOrientationTransformWrapperView, BSAnimationSettings;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BKSDisplayRenderOverlay *_overlay;
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (void)_startAnimation;
- (long long)sceneViewPresentationPriority:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (void)_prepareAnimation;
- (void).cxx_destruct;
- (void)_cleanupAnimation;

@end
