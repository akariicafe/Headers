@interface VTVoiceTriggerEnabledMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;

@end
