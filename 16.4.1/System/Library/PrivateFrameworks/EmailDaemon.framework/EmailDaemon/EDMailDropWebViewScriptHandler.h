@class NSString, WKWebView;

@interface EDMailDropWebViewScriptHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
