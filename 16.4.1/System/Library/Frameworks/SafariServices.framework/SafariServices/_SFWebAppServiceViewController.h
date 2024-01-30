@class UIView, NSString, UIWebClip, _SFWebClipMetadataFetcher, BKSApplicationStateMonitor, WKProcessPool, _SFInjectedJavaScriptController, NSMutableArray, WBSApplicationManifestFetcher, WKWebsiteDataStore, UIColor;

@interface _SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol, _WKWebsiteDataStoreDelegate, SFMediaRecordingDocument> {
    UIWebClip *_webClip;
    UIView *_statusBarBackgroundView;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_websiteDataStore;
    NSMutableArray *_fallbackURLs;
    BKSApplicationStateMonitor *_stateMonitor;
    unsigned int _hostState;
    unsigned long long _mediaStateIconBeforeSuspension;
    WBSApplicationManifestFetcher *_applicationManifestFetcher;
    _SFInjectedJavaScriptController *_activityJSController;
    _SFWebClipMetadataFetcher *_webClipMetadataFetcher;
    UIColor *_themeColor;
    BOOL _updatingThemeColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canOverrideStatusBar;
@property (readonly, nonatomic) BOOL audioOnly;
@property (readonly, copy, nonatomic) NSString *URLString;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)serviceViewControllers;

- (id)processPool;
- (void)statusBarIndicatorTappedWithCompletionHandler:(id /* block */)a0;
- (long long)preferredStatusBarStyle;
- (void)muteMediaCapture;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)websiteDataStore;
- (void)setMediaStateIcon:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_hostApplicationDidEnterBackground;
- (long long)_persona;
- (id)webViewConfiguration;
- (id)notificationPermissionsForWebsiteDataStore:(id)a0;
- (void)websiteDataStore:(id)a0 openWindow:(id)a1 fromServiceWorkerOrigin:(id)a2 completionHandler:(id /* block */)a3;
- (void)websiteDataStore:(id)a0 showNotification:(id)a1;
- (void)websiteDataStore:(id)a0 workerOrigin:(id)a1 updatedAppBadge:(id)a2;
- (BOOL)_clientIsWebApp;
- (id)_canonicalPageURL;
- (void)_fetchApplicationManifestIfNeeded;
- (void)_handleHostStateUpdate:(id)a0;
- (void)_initialLoadFinishedWithSuccess:(BOOL)a0;
- (BOOL)_isURLOutOfLegacyScope:(id)a0 withLoginURLExempted:(BOOL)a1;
- (BOOL)_isURLOutOfManifestScope:(id)a0;
- (BOOL)_isURLOutOfScope:(id)a0 withLoginURLExempted:(BOOL)a1;
- (void)_loadNextFallbackURL;
- (void)_loadWebClipPageURL:(id)a0;
- (void)_setCurrentWebViewController:(id)a0;
- (void)_setUpCookieStoragePolicyForDataStore:(id)a0;
- (void)_updateDisplayMode;
- (void)_updateThemeColor;
- (BOOL)_usesScrollToTopView;
- (BOOL)canPrint;
- (void)clearWebViewAndWebsiteDataWithCompletion:(id /* block */)a0;
- (void)clearWebsiteDataWithWebClipIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)createWebsiteDataStoreForWebClipIdentifier:(id)a0;
- (void)handlePushNotificationActivation:(id)a0;
- (void)loadWebAppWithIdentifier:(id)a0;
- (void)navigationBarDoneButtonWasTapped:(id)a0;
- (id)placeholderBundleIdentifierForDataStore:(id)a0;
- (void)processWebPushForWebAppWithIdentifier:(id)a0;
- (void)setupPreferences:(id)a0;
- (void)webAppDidBecomeActive;
- (void)webAppWillResignActive;
- (void)webViewController:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webViewController:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webViewController:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewController:(id)a0 requestNotificationPermissionForSecurityOrigin:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webViewController:(id)a0 updatedAppBadge:(id)a1 fromSecurityOrigin:(id)a2;
- (void)webViewControllerDidChangeLoadingState:(id)a0;
- (void)webViewControllerDidChangeURL:(id)a0;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)a0;
- (void)webViewControllerDidUpdateThemeColor:(id)a0;
- (id)websiteDataStoreConfigurationWithWebClipIdentifier:(id)a0;

@end
