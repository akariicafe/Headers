@class NSString, NSURL, UIWebView;

@interface RUIWebView : RUIElement <UIWebViewDelegate> {
    UIWebView *_webView;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *html;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView;
- (id)sourceURL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidFinishLoad:(id)a0;
- (BOOL)_isScrollEnabled;
- (id)userStyleSheet;

@end
