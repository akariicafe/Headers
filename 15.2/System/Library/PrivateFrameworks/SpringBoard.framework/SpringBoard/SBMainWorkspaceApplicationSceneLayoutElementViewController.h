@class NSMutableSet, NSString, BSCornerRadiusConfiguration, SBDeviceApplicationSceneHandle, UIView, UIDropInteraction, SBHomeGrabberView;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext, SBApplicationSceneBackgroundView;

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMainDisplaySceneLayoutElementViewControlling, SBMedusaDecoratedDeviceApplicationSceneViewControlling> {
    BOOL _nubViewHidden;
    BOOL _nubViewHighlighted;
    NSMutableSet *_maskDisplayCornersReasons;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowOffset;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) double darkenViewAlpha;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double blurViewIconScale;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (nonatomic, getter=isNubViewHidden) BOOL nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) BOOL nubViewHighlighted;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (copy, nonatomic) NSString *sceneMinificationFilter;
@property (nonatomic) BOOL sceneRendersAsynchronously;
@property (readonly, nonatomic) UIView *sceneContentView;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentReferenceSize;
@property (readonly, nonatomic) long long contentInterfaceOrientation;

- (id)containerViewForBlurContentView;
- (void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)a0;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (long long)trailingStatusBarStyle;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (long long)leadingStatusBarStyle;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (double)currentStatusBarHeight;
- (void)willRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 alongsideContainerView:(id)a2 animated:(BOOL)a3;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)sceneHandle:(id)a0 didChangeEffectiveForegroundness:(BOOL)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (id)initialCornerRadiusConfiguration;
- (void)prepareForReuse;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (id)initWithDisplayIdentity:(id)a0;
- (BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (void)setMaskDisplayCorners:(BOOL)a0 forReason:(id)a1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)a0;
- (void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)a0;
- (id)_deviceApplicationSceneViewController;
- (BOOL)_shouldDisplayLayoutElementBecomeActive;
- (unsigned long long)supportedContentInterfaceOrientations;
- (id)_applicationSceneViewControllerForSceneHandle:(id)a0;
- (void)_configureViewController:(id)a0;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)a0;
- (id)_applicationSceneViewController;
- (id)_medusaDecoratedVC;
- (id)_medusaDecoratedVC:(id)a0;
- (id)_deviceApplicationSceneViewController:(id)a0;

@end
