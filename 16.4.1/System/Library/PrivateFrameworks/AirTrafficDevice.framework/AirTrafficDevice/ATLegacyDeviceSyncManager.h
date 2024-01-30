@class NSMutableDictionary, ATLegacyAssetLink, ATClientController, NSDate, NSDictionary, NSObject, NSMutableArray, ATUserDefaults, NSString, ATSession, ATDeviceDiskUsageProvider, ATAsset, ATLegacyMessageLink, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ICEnvironmentMonitorObserver, ATSessionObserver, ATLegacyAssetLinkProgressDelegate> {
    ATUserDefaults *_defaults;
    ATClientController *_clientController;
    ATDeviceDiskUsageProvider *_diskUsageProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageLinks;
    ATLegacyMessageLink *_currentMessageLink;
    ATLegacyAssetLink *_assetLink;
    NSMutableArray *_dataclasses;
    unsigned int _grappaId;
    NSDate *_startTime;
    BOOL _localSyncRequestCanceled;
    BOOL _localSyncRequest;
    BOOL _automaticSync;
    id /* block */ _clientProgressCallback;
    NSMutableDictionary *_dataclassTimers;
    unsigned int _currentStage;
    NSString *_currentDataclass;
    NSString *_currentStatus;
    ATAsset *_currentAsset;
    double _currentSyncProgress;
    double _currentOverallProgress;
    struct CacheDeleteToken { } *_cacheDeleteToken;
    NSMutableSet *_dataClassesWithUpdatedDiskUsage;
    double _lastDiskUsageUpdateTime;
}

@property (retain, nonatomic) ATSession *syncSession;
@property (copy, nonatomic) NSDictionary *currentSyncHostInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)legacyDeviceSyncManager;

- (void)sessionDidFinish:(id)a0;
- (void)_reset;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)_handleFinishedSyncingMetadataMessage:(id)a0 fromLink:(id)a1;
- (void)messageLinkWasClosed:(id)a0;
- (void)session:(id)a0 didBeginSessionTask:(id)a1;
- (void)_handleAssetMetricsMessage:(id)a0 fromLink:(id)a1;
- (void)messageLinkWasInitialized:(id)a0;
- (void)messageLinkWasOpened:(id)a0;
- (void)sessionWillBegin:(id)a0;
- (void)_handleRequestingSyncMessage:(id)a0 fromLink:(id)a1;
- (void)initiateSyncForLibrary:(id)a0 onMessageLink:(id)a1;
- (id)_currentHostType;
- (void)_handleSyncStatusMessage:(id)a0 fromLink:(id)a1;
- (void)_sendDiskUsage;
- (void)_handleCapabilitiesMessage:(id)a0 fromLink:(id)a1;
- (void)cancelSyncOnMessageLink:(id)a0;
- (void)_reportLocalProgress;
- (void)session:(id)a0 willBeginSessionTask:(id)a1;
- (void)_sendSyncAllowed;
- (id)init;
- (void)_sendDiskUsageWithUpdatedDataClasses:(id)a0;
- (void)_reconcileSyncWithMessage:(id)a0;
- (void)_sendInstalledAssets;
- (void)_handleSyncFailedMessage:(id)a0 fromLink:(id)a1;
- (void)_cancelExistingSyncSession;
- (void)session:(id)a0 didUpdateSessionTask:(id)a1;
- (void).cxx_destruct;
- (void)assetLink:(id)a0 didUpdateOverallProgress:(double)a1;
- (void)_handleHostInfoMessage:(id)a0 fromLink:(id)a1;
- (id)currentSyncState;
- (BOOL)_currentLinkIsWifiConnection;

@end
