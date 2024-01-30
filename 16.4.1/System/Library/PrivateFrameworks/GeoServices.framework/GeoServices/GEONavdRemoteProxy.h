@class NSMutableDictionary, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, GEONavdXPCInterface;

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;

- (void)open;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)close;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)didPostUINotification:(unsigned long long)a0 forDestination:(id)a1 fromClient:(id)a2;
- (void)forceCacheRefresh;
- (void)navdProxyReceivedData:(id)a0 ofType:(id)a1;
- (void)navdProxyReceivedHypothesis:(id)a0 forClient:(id)a1;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)a0 client:(id)a1;
- (void)requestRefreshForPlannedDestination:(id)a0 client:(id)a1;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)a0;
- (void)startMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2 handler:(id /* block */)a3;
- (void)statusWithCallback:(id /* block */)a0;
- (void)stopMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2;

@end
