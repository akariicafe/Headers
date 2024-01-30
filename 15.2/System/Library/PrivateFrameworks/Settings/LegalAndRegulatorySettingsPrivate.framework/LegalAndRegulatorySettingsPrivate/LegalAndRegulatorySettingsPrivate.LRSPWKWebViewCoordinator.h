@interface LegalAndRegulatorySettingsPrivate.LRSPWKWebViewCoordinator : NSObject <WKNavigationDelegate, UIScrollViewDelegate>

- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
