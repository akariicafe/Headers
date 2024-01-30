@interface CSAVCallConnectedMonitor : CSEventMonitor {
    BOOL _hasConnectedAVCall;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (id)init;
- (void)_handleCallActiveDidChangeNotification:(id)a0;
- (void)_startObservingAVCallActiveChange;
- (BOOL)hasConnectedAVCall;

@end
