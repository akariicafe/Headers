@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriEnabled;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (BOOL)fetchIsEnabled;
- (id)init;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;

@end
