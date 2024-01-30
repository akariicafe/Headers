@class SWCrashRetryThrottler, UIActivityIndicatorView, WKWebView, WKWebsiteDataStore, NSString;
@protocol SXSceneStateMonitor, SXComponentActionHandler, SXProxyAuthenticationHandler;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener, _WKFullscreenDelegate>

@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic) BOOL webViewIsLoaded;
@property (nonatomic) BOOL isPresentingFullscreen;
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) id<SXProxyAuthenticationHandler> proxyAuthenticationHandler;
@property (readonly, nonatomic) id<SXSceneStateMonitor> sceneStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfiguration;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)_webViewDidExitElementFullscreen:(id)a0;
- (void)handleError:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_webViewDidEnterFullscreen:(id)a0;
- (void)_webViewDidExitFullscreen:(id)a0;
- (void)layoutSubviews;
- (void)_webViewWebProcessDidCrash:(id)a0;
- (void)_webViewDidEnterElementFullscreen:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionContentFrame;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 sceneStateMonitor:(id)a6 actionHandler:(id)a7 websiteDataStore:(id)a8 proxyAuthenticationHandler:(id)a9;
- (unsigned long long)analyticsVideoType;
- (void)webViewEnteredFullscreen:(id)a0;
- (void)webViewExitedFullscreen:(id)a0;
- (BOOL)shouldAllowRequestToURL:(id)a0;
- (void)updateWebViewToWidth:(double)a0;
- (void)initializeWebViewWithURL:(id)a0;

@end
