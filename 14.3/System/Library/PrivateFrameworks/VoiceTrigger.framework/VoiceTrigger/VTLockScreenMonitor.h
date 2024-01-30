@interface VTLockScreenMonitor : VTEventMonitor {
    int _notifyToken;
    unsigned char _lockScreenState;
}

+ (id)sharedInstance;

- (unsigned char)lockScreenState;
- (id)init;
- (void)_didReceiveLockScreenStateChanged:(unsigned char)a0;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withLockScreenState:(unsigned char)a1;
- (void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)lockScreenStateDescription:(unsigned char)a0;
- (unsigned char)_checkLockScreenState;

@end
