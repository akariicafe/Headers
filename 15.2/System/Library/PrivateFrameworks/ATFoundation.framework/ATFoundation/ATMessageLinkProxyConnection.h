@class ATMessageLink, NSString, NSXPCConnection;

@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkProxyConnection, NSStreamDelegate, ATMessageLinkObserver, ATMessageLinkRequestHandler>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) ATMessageLink *messageLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageLinkWasInitialized:(id)a0;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)messageLinkWasClosed:(id)a0;
- (void).cxx_destruct;
- (void)messageLinkWasOpened:(id)a0;
- (void)stop;
- (void)connectWithCompletion:(id /* block */)a0;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeRequestHandlerForDataClass:(id)a0 completion:(id /* block */)a1;
- (void)addRequestHandler:(id)a0 forDataClass:(id)a1 completion:(id /* block */)a2;
- (id)initWithMessageLink:(id)a0 connection:(id)a1;

@end
