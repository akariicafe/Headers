@class UIView, NSString, SPUIRemoteSearchViewController, FBSDisplayConfiguration, _UILegibilitySettings, SBDeviceApplicationSceneHandle, SBWindowSceneStatusBarSettingsAssertion, SBScrollToTopSceneProxyView, SBMedusaHostedKeyboardWindowLevelAssertion;
@protocol SBScenePresentingDelegate, SPUIRemoteSearchViewDelegate, BSInvalidatable, UIScenePresenter, SBSpotlightMultiplexingViewControllerDelegate;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, FBSceneObserver, SBScrollToTopSceneProxyViewDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SBMainDisplaySceneManagerObserver, SBMedusaHostedKeyboardWindowControllerObserver, SBScenePresenting> {
    SBScrollToTopSceneProxyView *_scrollToTopView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    id<SBScenePresentingDelegate> _inputUIPresentingDelegate;
    id<BSInvalidatable> _inputUIPresenterAssertion;
    UIView *_inputUIView;
}

@property (class, readonly, nonatomic) double effectiveSpotlightSearchFieldAvoidanceHeight;
@property (class, readonly, nonatomic) SPUIRemoteSearchViewController *sharedRemoteSearchViewController;
@property (class, readonly, nonatomic) SPUIRemoteSearchViewController *sharedRemoteSearchViewControllerIfExists;

@property (nonatomic, getter=isActiveDelegate) BOOL activeDelegate;
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (retain, nonatomic) UIView *externalKeyboardView;
@property (retain, nonatomic) UIView *keyboardHostView;
@property (retain, nonatomic) id<UIScenePresenter> keyboardPresenter;
@property (nonatomic, getter=isSearchContentAvailable) BOOL searchContentAvailable;
@property (readonly, nonatomic) struct SBSpotlightHostedContentMetrics { double x0; double x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; double x4; } spotlightHostedContentMetrics;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) unsigned long long level;
@property (weak, nonatomic) id<SBSpotlightMultiplexingViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (nonatomic) BOOL wantsExternalKeyboardView;
@property (readonly, nonatomic) BOOL externalKeyboardViewContainsKeyboard;
@property (weak, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct SBSpotlightHostedContentMetrics { double x0; double x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; double x4; })_class_spotlightHostedContentMetrics;
+ (BOOL)isShownWithinWindow:(id)a0;
+ (BOOL)isShownWithinWindowScene:(id)a0;
+ (id)spotlightSceneIdentityTokenIfActiveForeground;

- (void)dismissSearchView;
- (id)sceneHandle;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)searchViewContentAvailabilityDidChange;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)setPresentingDelegate:(id)a0;
- (void)searchViewKeyboardPresentationStateDidChange;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)_configureExternalKeyboardView:(BOOL)a0;
- (void)_acquireInputUIPresentingAssertionIfNecessary;
- (unsigned long long)_appStatusBarSettingsLevelForSpotlightMultiplexingLevel:(unsigned long long)a0;
- (void)_clearStatusBarAssertion;
- (void)_configureExternalKeyboardView;
- (void)_configureSceneObservation:(BOOL)a0 forScene:(id)a1;
- (void)_configureStatusBarScrollToTopView;
- (void)_evaluateSearchContentAvailabilityForScene:(id)a0;
- (void)_invalidateInputUIPresentingAssertion;
- (BOOL)_isStatusBarEffectivelyHidden;
- (void)_notifyExternalKeyboardViewContainsKeyboard:(BOOL)a0;
- (void)_registerStatusBarScrollToTopView;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)a0;
- (BOOL)_remoteSearchViewControllerHasKeyboardPresented;
- (id)_spotlightSceneIdentifier;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)a0;
- (void)_updateStatusBarAssertion;
- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate:(BOOL)a0;
- (BOOL)isVisibleOnScreen;
- (void)keyboardLayersDidChange:(id)a0;
- (id)parentSceneIdentityToken;
- (id)presentScene:(id)a0 viewControllerBuilderBlock:(id /* block */)a1;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)a0 rootedAtWindow:(id)a1;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)a0 rootedAtWindow:(id)a1;

@end
