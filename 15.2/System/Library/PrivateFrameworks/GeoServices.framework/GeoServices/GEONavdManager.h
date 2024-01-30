@class NSMutableArray, GEONavdServerProxy;

@interface GEONavdManager : NSObject {
    GEONavdServerProxy *_proxy;
    NSMutableArray *_openers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _openersLock;
}

+ (void)setProxyClass:(Class)a0;
+ (id)navdManager;
+ (id)navdManagerClientIdentifier:(id)a0;

- (void)openForClient:(id)a0;
- (void).cxx_destruct;
- (void)closeForClient:(id)a0;
- (id)init;
- (void)forceCacheRefresh;
- (void)statusWithCallback:(id /* block */)a0;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)a0;
- (void)startMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2 handler:(id /* block */)a3;
- (void)requestRefreshForPlannedDestination:(id)a0 client:(id)a1;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)a0 client:(id)a1;
- (void)stopMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2;
- (void)didPostUINotification:(unsigned long long)a0 forDestination:(id)a1 fromClient:(id)a2;

@end
