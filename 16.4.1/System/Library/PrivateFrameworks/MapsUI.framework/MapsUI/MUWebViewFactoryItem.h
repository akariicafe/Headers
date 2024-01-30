@class MUWebViewMessageHandlerProxy, MUWebBridgeConfiguration, WKWebView;

@interface MUWebViewFactoryItem : NSObject

@property (readonly, copy, nonatomic) MUWebBridgeConfiguration *bridgeConfiguration;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) MUWebViewMessageHandlerProxy *messageHandlerProxy;

- (void).cxx_destruct;
- (id)initWithBridgeConfiguration:(id)a0 webView:(id)a1 messageHandlerProxy:(id)a2;

@end
