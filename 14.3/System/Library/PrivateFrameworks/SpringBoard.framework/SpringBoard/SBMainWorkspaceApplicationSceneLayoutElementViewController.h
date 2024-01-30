@class BSCornerRadiusConfiguration, NSString, UIView, SBDeviceApplicationSceneHandle, UIDropInteraction, SBHomeGrabberView, NSMutableSet, SBInlineAppExposeContainerViewController, SBSceneViewStatusBarAssertion;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext, SBApplicationSceneBackgroundView;

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <SBDeviceApplicationSceneHandleObserver, SBInlineAppExposeContainerViewControllerDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMainDisplaySceneLayoutElementViewControlling, SBMedusaDecoratedDeviceApplicationSceneViewControlling> {
    BOOL _nubViewHidden;
    BOOL _nubViewHighlighted;
    NSMutableSet *_maskDisplayCornersReasons;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowOffset;
@property (retain, nonatomic) SBSceneViewStatusBarAssertion *inlineAppExposeContainerStatusBarAssertion;
@property (readonly, nonatomic) SBInlineAppExposeContainerViewController *inlineAppExposeContainerOverlayViewController;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) double darkenViewAlpha;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (nonatomic, getter=isNubViewHidden) BOOL nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) BOOL nubViewHighlighted;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentReferenceSize;
@property (readonly, nonatomic) long long contentInterfaceOrientation;

- (id)_applicationSceneViewController;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 withInterfaceOrientation:(long long)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)initWithDisplayIdentity:(id)a0;
- (unsigned long long)supportedContentInterfaceOrientations;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)animationControllerForTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (id)initialCornerRadiusConfiguration;
- (BOOL)_shouldDisplayLayoutElementBecomeActive;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (id)containerViewForBlurContentView;
- (BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)a0;
- (void)sceneHandle:(id)a0 didChangeEffectiveForegroundness:(BOOL)a1;
- (void)prepareForReuse;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (void)inlineContainerViewController:(id)a0 setStatusBarHidden:(BOOL)a1;
- (id)_relinquishInlineAppExposeContainerViewController;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_deviceApplicationSceneViewController;
- (void)_configureViewController:(id)a0;
- (void)blurApplicationContent:(BOOL)a0 withAnimationFactory:(id)a1 completion:(id /* block */)a2;
- (void)setMaskDisplayCorners:(BOOL)a0 forReason:(id)a1;
- (void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)a0;
- (id)_medusaDecoratedVC:(id)a0;
- (id)_medusaDecoratedVC;
- (void)setInlineAppExposeContainerViewController:(id)a0;
- (id)_deviceApplicationSceneViewController:(id)a0;
- (id)_applicationSceneViewControllerForSceneHandle:(id)a0;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)a0;

@end
