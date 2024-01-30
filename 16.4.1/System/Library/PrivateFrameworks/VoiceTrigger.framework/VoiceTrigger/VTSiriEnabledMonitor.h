@interface VTSiriEnabledMonitor : VTEventMonitor {
    BOOL _isSiriEnabled;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (BOOL)isEnabled;
- (id)init;

@end
