@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)isSoftwareUpdateCheckingRunning;
- (BOOL)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)a0;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withSoftwareUpdateCheckingRunning:(BOOL)a1;
- (unsigned char)_softwareUpdateCheckingState;

@end
