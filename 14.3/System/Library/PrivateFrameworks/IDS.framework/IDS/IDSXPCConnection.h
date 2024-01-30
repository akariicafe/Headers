@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface IDSXPCConnection : NSObject <NSXPCConnectionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *pendingTransactions;
@property (retain, nonatomic) IDSXPCConnection *rootConnection;
@property (retain, nonatomic) id<NSXPCProxyCreating> remoteObject;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL forSyncMessaging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorForMissingEntitlement:(id)a0;

- (id)initWithQueue:(id)a0 remoteObject:(id)a1;
- (id)remoteObjectProxyWithTimeoutInSeconds:(double)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)valueForEntitlement:(id)a0;
- (void)dealloc;
- (void)_cleanupAllPendingTransactions;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)initWithQueue:(id)a0 takingOverAndResumingConnection:(id)a1;
- (BOOL)hasEntitlement:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initForSyncMessagingWithQueue:(id)a0 takingOverAndResumingConnection:(id)a1;
- (id)initWithRemoteObject:(id)a0 rootConnection:(id)a1;
- (id)_initWithQueue:(id)a0 takingOverAndResumingConnection:(id)a1 forSyncMessaging:(BOOL)a2;

@end
