@interface VTLowPowerModeMonitor : VTEventMonitor {
    unsigned char _powerMode;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (unsigned char)_checkPowerMode;
- (void)_didReceiveLowPowerModeChanged;
- (void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)a0;
- (void)_notifyObserver:(id)a0 withPowerMode:(unsigned char)a1;
- (BOOL)isLowPowerMode;
- (unsigned char)powerMode;

@end
