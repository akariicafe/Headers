@class WKNavigation, WFCoercionOptions, NSString, WFWebResource, WKWebView;

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) WKNavigation *pageNavigation;
@property (retain, nonatomic) WFWebResource *webResource;
@property (retain, nonatomic) WFCoercionOptions *coercionOptions;
@property BOOL didAttemptToLoadRemoteResources;
@property BOOL userDidAllowLoadingExternalResources;
@property BOOL didPresentSmartPrompt;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deniedExternalResourcesLoadError;
+ (void)loadWebResource:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 configuration:(id)a2 coercionOptions:(id)a3 completionHandler:(id /* block */)a4;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_webView:(id)a0 contentRuleListWithIdentifier:(id)a1 performedAction:(id)a2 forURL:(id)a3;
- (void).cxx_destruct;
- (id)errorWithErrorCode:(long long)a0;
- (void)generateBlockingContentRuleListWithCompletionHandler:(id /* block */)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 configuration:(id)a1 coercionOptions:(id)a2;
- (void)loadWebResource:(id)a0 completionHandler:(id /* block */)a1;

@end
