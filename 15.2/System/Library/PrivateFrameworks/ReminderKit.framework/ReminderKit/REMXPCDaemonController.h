@class NSString, NSMutableDictionary, NSXPCConnection, REMStoreContainerToken;
@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

@interface REMXPCDaemonController : NSObject <REMDaemonController>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (retain, nonatomic) NSMutableDictionary *l_performersByName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) REMStoreContainerToken *storeContainerToken;
@property (weak, nonatomic) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weakSharedInstance;
+ (id)userInteractiveDaemonController;

- (id)_resolveAndCachePerformerWithResolver:(id)a0 reason:(id)a1 errorHandler:(id /* block */)a2;
- (void)asyncSyncInterfacePerformerWithReason:(id)a0 loadHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)syncChangeTrackingPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)_asyncPerformerWithResolver:(id)a0 reason:(id)a1 loadHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)_asyncResolvePerformerWithResolver:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (id)syncDebugPerformerWithErrorHandler:(id /* block */)a0;
- (id)_syncPerformerWithResolver:(id)a0 reason:(id)a1 errorHandler:(id /* block */)a2;
- (id)_xpcConnectionReconnectingIfNecessary;
- (id)initWithStoreContainerToken:(id)a0;
- (void)asyncIndexingPerformerWithReason:(id)a0 loadHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)_resolvePerformerWithResolver:(id)a0 reason:(id)a1 errorHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)syncStorePerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)_xpcConnectionDidInterrupt;
- (void)_xpcConnectionDidInvalidate;
- (id)syncDebugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)_asyncResolveAndCachePerformerWithResolver:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (id)initWithStoreContainerToken:(id)a0 userInteractive:(BOOL)a1;
- (void)asyncStorePerformerWithReason:(id)a0 loadHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)syncSyncInterfacePerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)dealloc;
- (id)syncIndexingPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;

@end
