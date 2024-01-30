@interface VTAssetMonitor : VTEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (id)init;
- (void)_didReceiveNewAssetAvailable;
- (void)notifyNewAssetDownloaded;

@end
