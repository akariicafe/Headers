@class NSMutableDictionary, ATLegacyAssetLink, ATClientController, NSDate, NSDictionary, NSObject, NSMutableArray, ATUserDefaults, NSString, ATSession, ATDeviceDiskUsageProvider, ATAsset, ATLegacyMessageLink;
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
}

@property (retain, nonatomic) ATSession *syncSession;
@property (copy, nonatomic) NSDictionary *currentSyncHostInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)legacyDeviceSyncManager;

- (void)_reset;
- (void)_handleSyncStatusMessage:(id)a0 fromLink:(id)a1;
- (void)_handleSyncFailedMessage:(id)a0 fromLink:(id)a1;
- (void)messageLinkWasInitialized:(id)a0;
- (void)_handleFinishedSyncingMetadataMessage:(id)a0 fromLink:(id)a1;
- (void)_handleRequestingSyncMessage:(id)a0 fromLink:(id)a1;
- (void)session:(id)a0 didUpdateSessionTask:(id)a1;
- (void)_handleHostInfoMessage:(id)a0 fromLink:(id)a1;
- (void)messageLinkWasClosed:(id)a0;
- (void)_reconcileSyncWithMessage:(id)a0;
- (id)_currentHostType;
- (void)session:(id)a0 willBeginSessionTask:(id)a1;
- (void)_sendInstalledAssets;
- (void)cancelSyncOnMessageLink:(id)a0;
- (void)_sendDiskUsageForDataClasses:(id)a0 updateFirst:(BOOL)a1;
- (void)sessionWillBegin:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_handleCapabilitiesMessage:(id)a0 fromLink:(id)a1;
- (void)_reportLocalProgress;
- (id)currentSyncState;
- (void)sessionDidFinish:(id)a0;
- (BOOL)_currentLinkIsWifiConnection;
- (void)initiateSyncForLibrary:(id)a0 onMessageLink:(id)a1;
- (void)_sendSyncAllowed;
- (void)_handleAssetMetricsMessage:(id)a0 fromLink:(id)a1;
- (void)assetLink:(id)a0 didUpdateOverallProgress:(double)a1;
- (void)_cancelExistingSyncSession;
- (void)messageLinkWasOpened:(id)a0;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)session:(id)a0 didBeginSessionTask:(id)a1;

@end
