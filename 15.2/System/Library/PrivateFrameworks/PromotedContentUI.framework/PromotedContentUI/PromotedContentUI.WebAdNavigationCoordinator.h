@interface PromotedContentUI.WebAdNavigationCoordinator : NSObject <WKNavigationDelegatePrivate> {
    void /* unknown type, empty encoding */ navigationResponder;
}

- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)_webView:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)_webView:(id)a0 webContentProcessDidTerminateWithReason:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
