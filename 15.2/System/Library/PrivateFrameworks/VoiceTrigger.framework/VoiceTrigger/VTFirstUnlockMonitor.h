@interface VTFirstUnlockMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (BOOL)isFirstUnlocked;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (id)init;
- (BOOL)_checkFirstUnlocked;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;

@end
