@class NSString, NSXPCConnection;

@interface CDMSetupXPCClient : NSObject <CDMSetupXPCListenerService> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)a0;
- (void)getNLAssetStatusForType:(id)a0 withReply:(id /* block */)a1;
- (void)getClientFlowStatusWithReply:(id /* block */)a0;
- (void)invalidateClientFlowCacheWithCompletion:(id /* block */)a0;

@end
