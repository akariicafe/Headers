@interface CSSpeechEndpointAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveNewSpeechEndpointAssetMetaData;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (id)init;

@end
