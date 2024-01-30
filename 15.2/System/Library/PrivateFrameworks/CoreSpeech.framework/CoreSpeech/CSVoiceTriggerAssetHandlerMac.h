@class CSAsset, NSMutableDictionary, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain) NSMutableDictionary *cachedEndpointAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)_handleEndpointVoiceTriggerAsset:(id)a0 completion:(id /* block */)a1;
- (void)start;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)_checkNewAssetAvailablityForEndpoint;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)_checkNewAssetAvailablity;
- (void)_handleVoiceTriggerAssetWithCompletion:(id /* block */)a0;

@end
