@class NSString, NSURL, WKWebView;

@interface RUIWebView : RUIElement <WKNavigationDelegate> {
    WKWebView *_webView;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *html;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView;
- (id)sourceURL;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (id)scriptForDisableMagnification;
- (id)userStyleSheet;
- (BOOL)_isScrollEnabled;

@end
