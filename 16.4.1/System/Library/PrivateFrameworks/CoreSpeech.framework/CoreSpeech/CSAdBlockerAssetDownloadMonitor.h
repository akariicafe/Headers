@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate> {
    int _notifyToken;
    unsigned long long _lastUpdatedAssetType;
}

@property (retain, nonatomic) CSTrialAssetDownloadMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)trialAssetDownloadMonitorDelegate:(id)a0 didInstallNewAsset:(BOOL)a1 assetType:(unsigned long long)a2;
- (void)_notifyObserver:(id)a0;
- (const char *)_notificationKey;
- (id)init;
- (void).cxx_destruct;
- (void)_didInstalledNewAdBlockerAsset;

@end
