@interface CSHostPowerStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (long long)currentDarwinHostState;
- (long long)currentPowerState;
- (long long)currentRawPowerState;

@end
