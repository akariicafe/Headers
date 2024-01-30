@interface VTLockScreenMonitor : VTEventMonitor {
    int _notifyToken;
    unsigned char _lockScreenState;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)lockScreenStateDescription:(unsigned char)a0;
- (unsigned char)_checkLockScreenState;
- (id)init;
- (void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)a0;
- (void)_didReceiveLockScreenStateChanged:(unsigned char)a0;
- (void)_notifyObserver:(id)a0 withLockScreenState:(unsigned char)a1;
- (unsigned char)lockScreenState;

@end
