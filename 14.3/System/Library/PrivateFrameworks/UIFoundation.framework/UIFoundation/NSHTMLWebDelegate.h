@class NSURL;

@interface NSHTMLWebDelegate : NSObject {
    BOOL _loadDidFinish;
    BOOL _loadDidSucceed;
    NSURL *_baseURL;
}

- (void)webView:(id)a0 decidePolicyForNewWindowAction:(id)a1 request:(id)a2 newFrameName:(id)a3 decisionListener:(id)a4;
- (id)init;
- (void)dealloc;
- (void)decidePolicyForRequest:(id)a0 decisionListener:(id)a1;
- (id)initWithBaseURL:(id)a0;
- (BOOL)loadDidFinish;
- (BOOL)loadDidSucceed;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (id)webView:(id)a0 identifierForInitialRequest:(id)a1 fromDataSource:(id)a2;
- (void)webView:(id)a0 resource:(id)a1 didFinishLoadingFromDataSource:(id)a2;
- (void)webView:(id)a0 resource:(id)a1 didFailLoadingWithError:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didReceiveAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 decidePolicyForMIMEType:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 didFailProvisionalLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didCommitLoadForFrame:(id)a1;

@end
