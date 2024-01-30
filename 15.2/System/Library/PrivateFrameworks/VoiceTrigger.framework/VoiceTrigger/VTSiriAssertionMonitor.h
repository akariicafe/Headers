@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char _assertionState;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_notifyObserver:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)enableAssertionReceived;
- (void)disableAssertionReceived;

@end
