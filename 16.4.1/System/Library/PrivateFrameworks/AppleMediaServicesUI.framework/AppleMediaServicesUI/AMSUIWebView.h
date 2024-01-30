@class NSArray, AMSUIWebClientContext, WKWebView, AMSBinaryPromise, NSString;

@interface AMSUIWebView : AMSUICommonView <WKUIDelegate, WKNavigationDelegatePrivate, WKScriptMessageHandlerWithReply>

@property (retain, nonatomic) NSArray *baseScripts;
@property (retain, nonatomic) AMSBinaryPromise *contentRulesPromise;
@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) AMSBinaryPromise *currentLoadPromise;
@property (readonly, nonatomic) BOOL contentLoaded;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (readonly, nonatomic) WKWebView *underlyingWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getSetCookiesForResponse:(id)a0;

- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 navigation:(id)a1 didFailProvisionalLoadInSubframe:(id)a2 withError:(id)a3;
- (void)dealloc;
- (void)_webView:(id)a0 contentRuleListWithIdentifier:(id)a1 performedAction:(id)a2 forURL:(id)a3;
- (void)layoutSubviews;
- (void)_webView:(id)a0 navigation:(id)a1 didSameDocumentNavigation:(long long)a2;
- (void).cxx_destruct;
- (id)loadRequest:(id)a0;
- (void)_webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2 userInfo:(id)a3;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (void)_finishedLoading;
- (void)_openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addScriptsToContentController:(id)a0 additionalScripts:(id)a1;
- (id)_jsonLogStringWithDictionary:(id)a0;
- (id)_parseRequestError:(id)a0 logKey:(id)a1;
- (id)_prepareWithURL:(id)a0 loadBlock:(id /* block */)a1;
- (void)_receiveJSObject:(id)a0 logKey:(id)a1 replyHandler:(id /* block */)a2;
- (id)_setupContentRulesForWebView:(id)a0 context:(id)a1;
- (id)initWithContext:(id)a0 additionalScripts:(id)a1;
- (id)loadRequest:(id)a0 response:(id)a1 responseData:(id)a2;
- (id)sendJSRequest:(id)a0;
- (void)takeSnapshotWithCompletion:(id /* block */)a0;
- (void)updateUserScriptsWithScripts:(id)a0;

@end
