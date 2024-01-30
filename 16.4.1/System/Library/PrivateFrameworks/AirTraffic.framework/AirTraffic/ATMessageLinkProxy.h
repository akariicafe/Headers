@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSHashTable, NSMutableDictionary, NSMutableSet;

@interface ATMessageLinkProxy : ATMessageLink <NSSecureCoding, ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSHashTable *_observers;
    NSMutableDictionary *_requestHandlers;
    NSMutableSet *_streams;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isInitialized) BOOL initialized;
@property (nonatomic, getter=isOpen) BOOL open;
@property (nonatomic) int endpointType;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)messageLinkWasClosed:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addObserver:(id)a0;
- (void)messageLinkWasInitialized:(id)a0;
- (void)messageLinkWasOpened:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addRequestHandler:(id)a0 forDataClass:(id)a1;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1 completion:(id /* block */)a2;
- (void)removeRequestHandlerForDataClass:(id)a0;

@end
