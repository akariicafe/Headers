@class NSMapTable, ISURLRequestPerformance, NSDictionary, SSAuthenticationContext, ACAccount, SUClientInterface, NSString, NSSet, SUScriptWindowContext, SUWebScriptReloadContext, NSMutableSet, UIWebView, NSLock;
@protocol SUWebViewManagerDelegate;

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate> {
    BOOL _initialLoadReported;
    SUClientInterface *_clientInterface;
    NSLock *_lock;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    NSMutableSet *_requireCellularURLs;
    NSMapTable *_scriptInterfaces;
    NSSet *_suppressCookiesHosts;
    long long _usingNetworkCount;
    struct __CFSet { } *_webFramesPendingInitialRequest;
}

@property (retain, nonatomic) id originalFrameLoadDelegate;
@property (retain, nonatomic) id originalPolicyDelegate;
@property (retain, nonatomic) id originalResourceLoadDelegate;
@property (retain, nonatomic) id originalUIDelegate;
@property (readonly, weak, nonatomic) UIWebView *webView;
@property (nonatomic) id<SUWebViewManagerDelegate> delegate;
@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (retain, nonatomic) ISURLRequestPerformance *initialRequestPerformance;
@property (retain, nonatomic) SUScriptWindowContext *scriptWindowContext;
@property (nonatomic) BOOL shouldSignRequests;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLocalStoragePath;

- (id)_delegate;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (id)uiWebView:(id)a0 connectionPropertiesForResource:(id)a1 dataSource:(id)a2;
- (void)uiWebView:(id)a0 decidePolicyForMIMEType:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (id)uiWebView:(id)a0 identifierForInitialRequest:(id)a1 fromDataSource:(id)a2;
- (void)uiWebView:(id)a0 resource:(id)a1 didFailLoadingWithError:(id)a2 fromDataSource:(id)a3;
- (void)uiWebView:(id)a0 resource:(id)a1 didFinishLoadingFromDataSource:(id)a2;
- (id)webThreadWebView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 didClearWindowObject:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webView:(id)a0 didFirstLayoutInFrame:(id)a1;
- (void)webView:(id)a0 didReceiveTitle:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)webView:(id)a0 resource:(id)a1 didReceiveResponse:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2;
- (BOOL)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2;
- (id)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3;
- (void)webViewDidFinishLoad:(id)a0;
- (void)webViewDidStartLoad:(id)a0;
- (id)_userIdentifier;
- (void)webView:(id)a0 didParseSource:(id)a1 fromURL:(id)a2 sourceId:(long long)a3 forWebFrame:(id)a4;
- (void)webView:(id)a0 exceptionWasRaised:(id)a1 sourceId:(long long)a2 line:(int)a3 forWebFrame:(id)a4;
- (void)webView:(id)a0 failedToParseSource:(id)a1 baseLineNumber:(unsigned long long)a2 fromURL:(id)a3 withError:(id)a4 forWebFrame:(id)a5;
- (id)DOMElementForScriptInterface:(id)a0 element:(id)a1;
- (void)_beginUsingNetwork;
- (void)_cancelUsingNetwork;
- (void)_endUsingNetwork;
- (void)_enumerateScriptInterfacesWithBlock:(id /* block */)a0;
- (id)_locateStorePageViewController;
- (BOOL)_presentModalAlertWithMessage:(id)a0 includingCancelButton:(BOOL)a1 configurationHandler:(id /* block */)a2;
- (void)_requestWebScriptReloadWithContext:(id)a0;
- (void)connectToWebView:(id)a0;
- (void)disconnectFromWebView;
- (void)dispatchEvent:(id)a0 forName:(id)a1;
- (void)dispatchEvent:(id)a0 forName:(id)a1 synchronously:(BOOL)a2;
- (id)initWithClientInterface:(id)a0;
- (id)parentViewControllerForScriptInterface:(id)a0;
- (id)performanceMetricsForScriptInterface:(id)a0;
- (void)scriptInterface:(id)a0 requireCellularForResourceWithURL:(id)a1;
- (void)webView:(id)a0 documentViewDidSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
