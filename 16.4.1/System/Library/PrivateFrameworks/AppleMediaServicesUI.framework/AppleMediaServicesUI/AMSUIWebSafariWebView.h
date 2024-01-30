@class NSString;
@protocol WKURLSchemeHandler, WKScriptMessageHandlerWithReply, WKNavigationDelegate, AMSUIWebSafariWebDelegate;

@interface AMSUIWebSafariWebView : WKWebView <WKURLSchemeHandler, WKScriptMessageHandlerWithReply>

@property (weak, nonatomic) NSString *logKey;
@property (weak, nonatomic) id<WKNavigationDelegate, WKScriptMessageHandlerWithReply, WKURLSchemeHandler, AMSUIWebSafariWebDelegate> safariDelegate;
@property (weak, nonatomic) NSString *scheme;
@property (nonatomic) double topInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createContentControllerWithScheme:(id)a0 data:(id)a1 messageHandler:(id)a2;

- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (id)initWithAppearance:(id)a0 scheme:(id)a1 data:(id)a2 delegate:(id)a3;

@end
