@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didInstalledNewVoiceTriggerAsset;
- (void)_notifyObserver:(id)a0;
- (const char *)_notificationKey;
- (id)init;

@end
