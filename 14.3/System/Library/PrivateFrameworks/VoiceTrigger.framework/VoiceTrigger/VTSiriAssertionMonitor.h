@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char _assertionState;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(BOOL)a0;
- (BOOL)isEnabled;
- (void)enableAssertionReceived;
- (void)disableAssertionReceived;

@end
