@class NSXPCConnection, NSObject;
@protocol OS_xpc_object;

@interface CKKSControl : NSObject

@property BOOL synchronous;
@property (retain) NSObject<OS_xpc_object> *endpoint;
@property (retain) NSXPCConnection *connection;

+ (id)controlObject:(id *)a0;
+ (id)CKKSControlObject:(BOOL)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)objectProxyWithErrorHandler:(id /* block */)a0;
- (void)rpcStatus:(id)a0 reply:(id /* block */)a1;
- (void)rpcFastStatus:(id)a0 reply:(id /* block */)a1;
- (void)rpcResetLocal:(id)a0 reply:(id /* block */)a1;
- (void)rpcResetCloudKit:(id)a0 reason:(id)a1 reply:(id /* block */)a2;
- (void)rpcResyncLocal:(id)a0 reply:(id /* block */)a1;
- (void)rpcResync:(id)a0 reply:(id /* block */)a1;
- (void)rpcFetchAndProcessChanges:(id)a0 reply:(id /* block */)a1;
- (void)rpcFetchAndProcessClassAChanges:(id)a0 reply:(id /* block */)a1;
- (void)rpcPushOutgoingChanges:(id)a0 reply:(id /* block */)a1;
- (void)rpcCKMetric:(id)a0 attributes:(id)a1 reply:(id /* block */)a2;
- (void)rpcPerformanceCounters:(id /* block */)a0;
- (void)rpcGetCKDeviceIDWithReply:(id /* block */)a0;
- (void)rpcTLKMissing:(id)a0 reply:(id /* block */)a1;
- (void)rpcKnownBadState:(id)a0 reply:(id /* block */)a1;

@end
