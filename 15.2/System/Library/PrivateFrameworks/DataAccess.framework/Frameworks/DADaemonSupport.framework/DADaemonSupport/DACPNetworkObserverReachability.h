@interface DACPNetworkObserverReachability : DAReachability {
    BOOL _monitoringReachability;
}

- (void)_reachabilityChanged:(id)a0;
- (void)_startMonitoringReachability;
- (BOOL)_monitoringReachability;
- (void)_stopMonitoringReachability;

@end
