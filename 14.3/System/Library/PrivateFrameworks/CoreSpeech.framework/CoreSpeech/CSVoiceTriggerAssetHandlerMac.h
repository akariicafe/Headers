@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CSVoiceTriggerAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)start;
- (void)_checkNewAssetAvailablity;
- (void)getVoiceTriggerAsset:(id /* block */)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;

@end
