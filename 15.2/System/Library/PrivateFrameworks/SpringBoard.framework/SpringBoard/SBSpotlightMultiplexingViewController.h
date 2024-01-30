@class SBAppStatusBarSettingsAssertion, SBMedusaHostedKeyboardWindowLevelAssertion, NSString, SPUIRemoteSearchViewController, SBScrollToTopSceneProxyView, SBDeviceApplicationSceneHandle, _UILegibilitySettings;
@protocol SPUIRemoteSearchViewDelegate;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBScrollToTopSceneProxyViewDelegate, SBDeviceApplicationSceneStatusBarStateObserver> {
    SBScrollToTopSceneProxyView *_scrollToTopView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

@property (class, readonly, nonatomic) SPUIRemoteSearchViewController *sharedRemoteSearchViewController;
@property (class, readonly, nonatomic) SPUIRemoteSearchViewController *sharedRemoteSearchViewControllerIfExists;

@property (nonatomic, getter=isActiveDelegate) BOOL activeDelegate;
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) unsigned long long level;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneHandle;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissSearchView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)a0 rootedAtWindow:(id)a1;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)a0 rootedAtWindow:(id)a1;
- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate:(BOOL)a0;
- (void)_registerStatusBarScrollToTopView;
- (void)_updateStatusBarAssertion;
- (void)_clearStatusBarAssertion;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_configureStatusBarScrollToTopView;
- (id)_spotlightSceneIdentifier;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)a0;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)a0;
- (BOOL)_isStatusBarEffectivelyHidden;
- (unsigned long long)_appStatusBarSettingsLevelForSpotlightMultiplexingLevel:(unsigned long long)a0;

@end
