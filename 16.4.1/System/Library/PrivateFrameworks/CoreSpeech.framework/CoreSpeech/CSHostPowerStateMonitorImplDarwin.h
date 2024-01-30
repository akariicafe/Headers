@interface CSHostPowerStateMonitorImplDarwin : CSHostPowerStateMonitor {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _serviceNotification;
    long long _hostState;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_didReceiveDarwinHostStateChangeNotification:(long long)a0;
- (int)_fetchHostStateWithService:(unsigned int)a0;
- (void)_notifyObserver:(id)a0 withDarwinHostState:(long long)a1;
- (long long)currentDarwinHostState;
- (long long)currentPowerState;
- (long long)currentRawPowerState;

@end
