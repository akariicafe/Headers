@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;
- (BOOL)isSoftwareUpdateCheckingRunning;
- (BOOL)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)a0;
- (unsigned char)_softwareUpdateCheckingState;
- (void)_notifyObserver:(id)a0 withSoftwareUpdateCheckingRunning:(BOOL)a1;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)a0;

@end
