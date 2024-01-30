@class NSMutableDictionary, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, GEONavdXPCInterface;

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;

- (void)_connectToDaemonIfNeededThreadUnsafe;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)navdProxyReceivedHypothesis:(id)a0 forClient:(id)a1;
- (void)dealloc;
- (void)forceCacheRefresh;
- (void)navdProxyReceivedData:(id)a0 ofType:(id)a1;
- (void)addObserver:(id)a0;
- (void)stopMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2;
- (void)didPostUINotification:(unsigned long long)a0 forDestination:(id)a1 fromClient:(id)a2;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)a0;
- (void)startMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2 handler:(id /* block */)a3;
- (void)statusWithCallback:(id /* block */)a0;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)a0 client:(id)a1;
- (void)open;
- (void)requestRefreshForPlannedDestination:(id)a0 client:(id)a1;

@end
