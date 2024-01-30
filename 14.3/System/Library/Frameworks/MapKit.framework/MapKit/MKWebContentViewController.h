@class WKNavigation, NSString, NSURL, MKWebBridge, NSLayoutConstraint, MKWebViewFactoryItem, UIActivityIndicatorView, WKWebView;
@protocol MKWebContentViewControllerDelegate;

@interface MKWebContentViewController : MKPlaceSectionViewController <WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MKWebBridgeDelegate, MKModuleViewControllerProtocol> {
    NSLayoutConstraint *_heightConstraint;
    MKWebViewFactoryItem *_webViewFactoryItem;
    WKWebView *_webView;
    MKWebBridge *_bridge;
    UIActivityIndicatorView *_activityIndicatorView;
    NSURL *_resolvedURL;
    WKNavigation *_currentWebNavigation;
}

@property (weak, nonatomic) id<MKWebContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolvedURLForRelativeURL:(id)a0;

- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)initWithURL:(id)a0;
- (void)infoCardThemeChanged;
- (void)_startLoading;
- (void)_addLoadingSpinner;
- (void)_removeLoadingSpinner;
- (void)_setHeight:(id)a0 callbackHandler:(id /* block */)a1;
- (void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(id /* block */)a0;
- (void)_resetBridge;
- (void)_removeModuleWithCallbackHandler:(id /* block */)a0;
- (void)_finishLoading;
- (void)_setHeight:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)webBridgeDidConnect:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void)_cancel;
- (void)viewDidLoad;

@end
