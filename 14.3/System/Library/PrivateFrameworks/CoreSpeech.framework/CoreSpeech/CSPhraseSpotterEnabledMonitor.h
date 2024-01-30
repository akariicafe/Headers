@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isPhraseSpotterEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_phraseSpotterEnabledDidChange;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;
- (BOOL)_checkPhraseSpotterEnabled;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)a0;

@end
