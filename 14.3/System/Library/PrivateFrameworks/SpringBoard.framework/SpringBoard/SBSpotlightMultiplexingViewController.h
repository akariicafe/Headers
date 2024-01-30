@class SBMedusaHostedKeyboardWindowLevelAssertion, NSString, SPUIRemoteSearchViewController, SBScrollToTopSceneProxyView, _UILegibilitySettings;
@protocol SPUIRemoteSearchViewDelegate;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBScrollToTopSceneProxyViewDelegate> {
    SBScrollToTopSceneProxyView *_scrollToTopView;
}

@property (class, readonly, nonatomic) SPUIRemoteSearchViewController *sharedRemoteSearchViewController;
@property (class, readonly, nonatomic) SPUIRemoteSearchViewController *sharedRemoteSearchViewControllerIfExists;

@property (nonatomic, getter=isActiveDelegate) BOOL activeDelegate;
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) unsigned long long level;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void).cxx_destruct;
- (void)dismissSearchView;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_sceneHandle;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)a0 rootedAtWindow:(id)a1;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)a0 rootedAtWindow:(id)a1;
- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate;
- (void)_registerStatusBarScrollToTopView;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_configureStatusBarScrollToTopView;
- (id)_spotlightSceneIdentifier;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)a0;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)a0;

@end
