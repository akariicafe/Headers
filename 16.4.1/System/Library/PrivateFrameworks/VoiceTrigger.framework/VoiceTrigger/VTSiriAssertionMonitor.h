@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char _assertionState;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;
- (void)dealloc;
- (void)_notifyObserver:(BOOL)a0;
- (id)init;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;

@end
