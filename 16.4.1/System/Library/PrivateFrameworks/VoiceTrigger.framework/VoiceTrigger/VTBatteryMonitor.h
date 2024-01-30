@interface VTBatteryMonitor : VTEventMonitor {
    int _notifyToken;
    unsigned char _batteryState;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (unsigned char)batteryState;
- (unsigned char)_checkBatteryState;
- (void)_didReceiveBatteryStatusChanged:(unsigned char)a0;
- (void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)a0;
- (void)_notifyObserver:(id)a0 withBatteryState:(unsigned char)a1;

@end
