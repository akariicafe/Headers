@class CSTrialAssetManager, NSString, CSLanguageCodeUpdateMonitor, NSObject, NSMutableDictionary, CSVoiceTriggerAssetDownloadMonitor, CSFirstUnlockMonitor, CSAsset, CSAssetManager, CSTrialAssetDownloadMonitor;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSTrialAssetDownloadMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) CSAsset *cachedAsset;
@property (retain) NSMutableDictionary *cachedEndpointAssets;
@property (retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (retain, nonatomic) CSFirstUnlockMonitor *firstUnlockMonitor;
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *trialAssetDownloadMonitor;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSTrialAssetManager *trialAssetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)trialAssetDownloadMonitorDelegate:(id)a0 didInstallNewAsset:(BOOL)a1 assetType:(unsigned long long)a2;
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)_checkNewAssetAvailablityForEndpoint;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)_checkNewAssetAvailablity;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1;
- (id)init;
- (void)start;
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)a0 languageCodeUpdateMonitor:(id)a1 firstUnlockMonitor:(id)a2 trialAssetDownloadMonitor:(id)a3 assetManager:(id)a4 trialAssetManager:(id)a5;
- (void)_handleEndpointVoiceTriggerAsset:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handleVoiceTriggerAssetWithCompletion:(id /* block */)a0;

@end
