@interface CSJarvisTriggerModeMonitor : CSEventMonitor {
    long long _triggerMode;
}

+ (id)sharedInstance;
+ (id)triggerModeStringDescription:(long long)a0;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;
- (long long)getTriggerMode;
- (void)setTriggerMode:(long long)a0;
- (long long)_fetchTriggerMode;
- (void)_notifyObserver:(id)a0 withJarvisTriggerMode:(long long)a1;
- (void)_notifyJarvisTriggerModeDidChanged;

@end
