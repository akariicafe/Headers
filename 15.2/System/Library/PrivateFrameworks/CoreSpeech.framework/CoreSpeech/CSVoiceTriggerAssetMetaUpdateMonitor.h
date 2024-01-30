@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceiveNewVoiceTriggerAssetMetaData;
- (void)_notifyObserver:(id)a0;
- (const char *)_asssetMetaUpdatedKey;
- (id)init;
- (void)notifyNewVoiceTriggerAssetMetaDataUpdated;

@end
