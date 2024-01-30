@class NSXPCConnection, NSObject;
@protocol OS_xpc_object;

@interface CKKSControl : NSObject

@property BOOL synchronous;
@property (retain) NSObject<OS_xpc_object> *endpoint;
@property (retain) NSXPCConnection *connection;

+ (id)controlObject:(id *)a0;
+ (id)CKKSControlObject:(BOOL)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)pcsMirrorKeysForServices:(id)a0 reply:(id /* block */)a1;
- (void)deleteSEView:(id)a0 reply:(id /* block */)a1;
- (void)fetchSEViewKeyHierarchy:(id)a0 forceFetch:(BOOL)a1 reply:(id /* block */)a2;
- (void)fetchSEViewKeyHierarchy:(id)a0 reply:(id /* block */)a1;
- (void)modifyTLKSharesForSEView:(id)a0 adding:(id)a1 deleting:(id)a2 reply:(id /* block */)a3;
- (id)objectProxyWithErrorHandler:(id /* block */)a0;
- (void)proposeTLKForSEView:(id)a0 proposedTLK:(id)a1 wrappedOldTLK:(id)a2 tlkShares:(id)a3 reply:(id /* block */)a4;
- (void)rpcCKMetric:(id)a0 attributes:(id)a1 reply:(id /* block */)a2;
- (void)rpcFastStatus:(id)a0 reply:(id /* block */)a1;
- (void)rpcFetchAndProcessChanges:(id)a0 classA:(BOOL)a1 onlyIfNoRecentFetch:(BOOL)a2 reply:(id /* block */)a3;
- (void)rpcFetchAndProcessChanges:(id)a0 reply:(id /* block */)a1;
- (void)rpcFetchAndProcessChangesIfNoRecentFetch:(id)a0 reply:(id /* block */)a1;
- (void)rpcFetchAndProcessClassAChanges:(id)a0 reply:(id /* block */)a1;
- (void)rpcGetCKDeviceIDWithReply:(id /* block */)a0;
- (void)rpcKnownBadState:(id)a0 reply:(id /* block */)a1;
- (void)rpcPerformanceCounters:(id /* block */)a0;
- (void)rpcPushOutgoingChanges:(id)a0 reply:(id /* block */)a1;
- (void)rpcResetCloudKit:(id)a0 reason:(id)a1 reply:(id /* block */)a2;
- (void)rpcResetLocal:(id)a0 reply:(id /* block */)a1;
- (void)rpcResync:(id)a0 reply:(id /* block */)a1;
- (void)rpcResyncLocal:(id)a0 reply:(id /* block */)a1;
- (void)rpcStatus:(id)a0 fast:(BOOL)a1 waitForNonTransientState:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)rpcStatus:(id)a0 reply:(id /* block */)a1;
- (void)rpcTLKMissing:(id)a0 reply:(id /* block */)a1;
- (void)toggleHavoc:(id /* block */)a0;

@end
