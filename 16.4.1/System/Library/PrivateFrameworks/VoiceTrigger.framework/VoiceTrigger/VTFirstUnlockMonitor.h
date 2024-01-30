@interface VTFirstUnlockMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (BOOL)isFirstUnlocked;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (id)init;

@end
