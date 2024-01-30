@class WKNavigation, NSString, WFWebResource, WKWebView;

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) WKNavigation *pageNavigation;
@property (retain, nonatomic) WFWebResource *webResource;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadWebResource:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 configuration:(id)a2 completionHandler:(id /* block */)a3;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 configuration:(id)a1;
- (void)loadWebResource:(id)a0 completionHandler:(id /* block */)a1;

@end
