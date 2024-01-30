@interface GEONavdServerProxy : NSObject

- (void)open;
- (void)close;
- (id)init;
- (void)didPostUINotification:(unsigned long long)a0 forDestination:(id)a1 fromClient:(id)a2;
- (void)forceCacheRefresh;
- (void)getDirectionsForClient:(id)a0 withRouteHypothesisRequest:(id)a1 andCallback:(id /* block */)a2;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)a0 client:(id)a1;
- (void)requestRefreshForPlannedDestination:(id)a0 client:(id)a1;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)a0;
- (void)startMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2 handler:(id /* block */)a3;
- (void)statusWithCallback:(id /* block */)a0;
- (void)stopMonitoringDestination:(id)a0 forClient:(id)a1 uuid:(id)a2;

@end
