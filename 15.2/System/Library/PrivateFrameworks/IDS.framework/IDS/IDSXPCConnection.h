@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface IDSXPCConnection : NSObject <NSXPCConnectionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL syncOntoMain;
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

- (id)initWithQueue:(id)a0 syncOntoMain:(BOOL)a1 takingOverAndResumingConnection:(id)a2;
- (id)remoteObjectProxyWithTimeoutInSeconds:(double)a0 errorHandler:(id /* block */)a1;
- (BOOL)hasEntitlement:(id)a0;
- (id)initWithQueue:(id)a0 remoteObject:(id)a1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)valueForEntitlement:(id)a0;
- (void)_cleanupAllPendingTransactions;
- (id)_initWithQueue:(id)a0 syncOntoMain:(BOOL)a1 takingOverAndResumingConnection:(id)a2 forSyncMessaging:(BOOL)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRemoteObject:(id)a0 rootConnection:(id)a1;
- (id)initForSyncMessagingWithQueue:(id)a0 takingOverAndResumingConnection:(id)a1;
- (id)initWithQueue:(id)a0 takingOverAndResumingConnection:(id)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
