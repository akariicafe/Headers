@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;

@end
