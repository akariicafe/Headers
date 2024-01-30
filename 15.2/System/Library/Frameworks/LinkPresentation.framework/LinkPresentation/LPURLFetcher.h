@class NSURL, NSString, WKWebView;

@interface LPURLFetcher : LPFetcher <WKNavigationDelegate> {
    id /* block */ _completionHandler;
    WKWebView *_webView;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) Class responseClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)cancel;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_failedWithErrorCode:(long long)a0 underlyingError:(id)a1;
- (void)_completedWithData:(id)a0 MIMEType:(id)a1 error:(id)a2;

@end
