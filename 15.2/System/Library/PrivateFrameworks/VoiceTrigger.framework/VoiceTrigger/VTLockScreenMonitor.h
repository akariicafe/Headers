@interface VTLockScreenMonitor : VTEventMonitor {
    int _notifyToken;
    unsigned char _lockScreenState;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)lockScreenStateDescription:(unsigned char)a0;
- (unsigned char)lockScreenState;
- (unsigned char)_checkLockScreenState;
- (void)_notifyObserver:(id)a0 withLockScreenState:(unsigned char)a1;
- (id)init;
- (void)_didReceiveLockScreenStateChanged:(unsigned char)a0;
- (void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)a0;

@end
