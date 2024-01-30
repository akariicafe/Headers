@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didInstalledNewVoiceTriggerAsset;
- (void)_startMonitoringWithQueue:(id)a0;
- (const char *)_notificationKey;
- (void)_notifyObserver:(id)a0;

@end
