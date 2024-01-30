@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isPhraseSpotterEnabled;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_phraseSpotterEnabledDidChange;
- (id)init;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (BOOL)_checkPhraseSpotterEnabled;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)a0;

@end
