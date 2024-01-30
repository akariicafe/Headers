@class NSString, MKWebViewFactoryItem, NSMutableDictionary;
@protocol MKWebBridgeDelegate;

@interface MKWebBridge : NSObject <WKScriptMessageHandler> {
    NSMutableDictionary *_pendingCallbackHandlers;
    long long _nextCallNumber;
    id /* block */ _defaultCallbackHandler;
}

@property (readonly, nonatomic) MKWebViewFactoryItem *webViewFactoryItem;
@property (readonly, nonatomic) long long connectionState;
@property (weak, nonatomic) id<MKWebBridgeDelegate> delegate;
@property (readonly, copy, nonatomic) NSMutableDictionary *callHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_operatingSystemVersion;
+ (id)URLByAddingConfiguration:(id)a0 toURL:(id)a1;
+ (id)_operatingSystemName;

- (void)closeConnection;
- (void).cxx_destruct;
- (id)initWithWebViewFactoryItem:(id)a0;
- (void)addCallableMethod:(id)a0 handler:(id /* block */)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)callMethod:(id)a0 arguments:(id)a1 callbackHandler:(id /* block */)a2;
- (void)_receiveMessage:(id)a0;
- (void)_postMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dispatchCall:(id)a0;
- (void)_dispatchCallback:(id)a0;
- (void)_consumeCallbackHandlerWithNumber:(id)a0 result:(id)a1 errorMessage:(id)a2;
- (void)_initializeConnection;

@end
