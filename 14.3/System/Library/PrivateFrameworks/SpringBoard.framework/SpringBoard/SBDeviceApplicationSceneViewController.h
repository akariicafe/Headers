@class NSHashTable, NSString, UIView, SBDeviceApplicationSceneHandle, MTLumaDodgePillSettings, SBDeviceApplicationSceneView, SBHomeGrabberView, UIApplicationSceneDeactivationAssertion, NSMutableArray, UIStatusBar, SBSceneViewStatusBarAssertion, SBFHomeGrabberSettings;
@protocol SBScenePlaceholderContentContext, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationSceneBackgroundView, BSInvalidatable;

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneHandleObserver, SBSceneViewDelegate, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneViewControlling> {
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSMutableArray *_overlayViewProviders;
    NSMutableArray *_activeOverlayViewProviders;
    SBSceneViewStatusBarAssertion *_activeOverlayStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_placeholderStatusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    id<BSInvalidatable> _liveContentDisableAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
}

@property (readonly, nonatomic, getter=_sceneView) SBDeviceApplicationSceneView *sceneView;
@property (retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings;
@property (retain, nonatomic, getter=_statusBarAssertions, setter=_setStatusBarAssertions:) NSHashTable *statusBarAssertions;
@property (nonatomic) BOOL rendersWhileLocked;
@property (nonatomic) BOOL shouldRasterizeSceneHostView;
@property (copy, nonatomic) NSString *sceneHostViewMinificationFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (void)_willEnableSecureDisplay;
- (void)_relinquishResignActiveAssertion;
- (void)sceneHandle:(id)a0 didChangeStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_recalculateResignActiveAssertionForActiveOverlays;
- (id)statusBarAssertionWithStatusBarSettings:(id)a0 atLevel:(unsigned long long)a1;
- (void)_statusBarAssertionsDidUpdate;
- (void)deactivateOverlayForViewProvider:(id)a0;
- (void)_configureForSecureDisplay:(BOOL)a0;
- (void)_configureForCurrentSecureDisplayState;
- (id)animationFactoryForImplicitTransitionFromMode:(long long)a0 toMode:(long long)a1 defaultFactory:(id)a2;
- (void)sceneHandle:(id)a0 didChangeStatusBarParts:(long long)a1;
- (void)_layoutFakeStatusBar;
- (BOOL)_isApplicationStatusBarHidden;
- (void)_deactivateOverlayForViewProvider:(id)a0;
- (void)_destroySceneOverlayViewProviders;
- (void)_addFakeStatusBarWithStyleRequest:(id)a0 enabledParts:(long long)a1;
- (void)_didDisableSecureDisplay;
- (void)activateOverlayForViewProvider:(id)a0;
- (void)_createSceneOverlayViewProvidersIfNecessary;
- (void)statusBarAssertionDidInvalidate:(id)a0;
- (id)initWithSceneHandle:(id)a0;
- (void).cxx_destruct;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (void)_removeFakeStatusBar;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)statusBarAssertionDidUpdate:(id)a0;
- (BOOL)overlayViewProviderRendersWhileLocked:(id)a0;
- (BOOL)definesPresentationContext;
- (void)sceneView:(id)a0 changedPreferredStatusBarStyleTo:(long long)a1;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)_shouldSuppressHomeGrabber;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_activeOverlaysWantResignActiveAssertion;
- (BOOL)_configureFakeStatusBarWithCurrentStyleRequestCreatingIfNecessary;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
