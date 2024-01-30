@class UIView, NSString, UIWebClip, _SFWebClipMetadataFetcher, BKSApplicationStateMonitor, WKProcessPool, _SFInjectedJavaScriptController, UIColor, NSMutableArray, WKWebsiteDataStore, _SFApplicationManifestFetcher;

@interface _SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol, _SFMediaRecordingDocument> {
    UIWebClip *_webClip;
    UIView *_statusBarBackgroundView;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_websiteDataStore;
    NSMutableArray *_fallbackURLs;
    BKSApplicationStateMonitor *_stateMonitor;
    unsigned int _hostState;
    unsigned long long _mediaStateIconBeforeSuspension;
    _SFApplicationManifestFetcher *_applicationManifestFetcher;
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
@property (readonly, nonatomic) NSString *URLString;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)muteMediaCapture;
- (long long)preferredStatusBarStyle;
- (id)processPool;
- (void)viewDidLoad;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)statusBarIndicatorTappedWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)webViewConfiguration;
- (void)setMediaStateIcon:(unsigned long long)a0;
- (unsigned long long)_persona;
- (void)dealloc;
- (BOOL)canPrint;
- (id)websiteDataStore;
- (void)_hostApplicationDidEnterBackground;
- (void)navigationBarDoneButtonWasTapped:(id)a0;
- (void)loadWebAppWithIdentifier:(id)a0;
- (void)webAppDidBecomeActive;
- (void)webAppWillResignActive;
- (void)_updateThemeColor;
- (void)webViewControllerDidChangeLoadingState:(id)a0;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)a0;
- (void)webViewController:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)_isURLOutOfManifestScope:(id)a0;
- (BOOL)_isURLOutOfLegacyScope:(id)a0 withLoginURLExempted:(BOOL)a1;
- (void)webViewController:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_loadNextFallbackURL;
- (void)webViewController:(id)a0 didFinishNavigation:(id)a1;
- (void)_fetchApplicationManifestIfNeeded;
- (void)_updateDisplayMode;
- (void)webViewControllerDidChangeURL:(id)a0;
- (BOOL)_isURLOutOfScope:(id)a0 withLoginURLExempted:(BOOL)a1;
- (id)_canonicalPageURL;
- (id)websiteDataStoreConfiguration;
- (void)_setCurrentWebViewController:(id)a0;
- (void)_initialLoadFinishedWithSuccess:(BOOL)a0;
- (BOOL)_clientIsWebApp;
- (void)_loadWebClipPageURL:(id)a0;
- (void)_handleHostStateUpdate:(id)a0;
- (void)webViewControllerDidUpdateThemeColor:(id)a0;
- (BOOL)_usesScrollToTopView;

@end
