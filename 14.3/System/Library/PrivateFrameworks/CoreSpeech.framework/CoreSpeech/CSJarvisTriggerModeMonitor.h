@interface CSJarvisTriggerModeMonitor : CSEventMonitor {
    long long _triggerMode;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (long long)getTriggerMode;
- (void)setTriggerMode:(long long)a0;
- (long long)_fetchTriggerMode;
- (void)_notifyObserver:(id)a0 withJarvisTriggerMode:(long long)a1;
- (void)_notifyJarvisTriggerModeDidChanged;

@end
