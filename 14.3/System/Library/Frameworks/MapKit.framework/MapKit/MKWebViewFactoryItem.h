@class MKWebViewMessageHandlerProxy, WKWebView, MKWebBridgeConfiguration;

@interface MKWebViewFactoryItem : NSObject

@property (readonly, copy, nonatomic) MKWebBridgeConfiguration *bridgeConfiguration;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) MKWebViewMessageHandlerProxy *messageHandlerProxy;

- (void).cxx_destruct;
- (id)initWithBridgeConfiguration:(id)a0 webView:(id)a1 messageHandlerProxy:(id)a2;

@end
