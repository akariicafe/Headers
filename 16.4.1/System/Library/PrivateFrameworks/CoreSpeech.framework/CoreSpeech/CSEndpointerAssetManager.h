@class CSAsset, NSDictionary, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, CESRTrialAssetDelegate>

@property (retain, nonatomic) CSAsset *currentHEPAsset;
@property (retain, nonatomic) CSAsset *currentOEPAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *asrDatapackInstallationStatus;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (void)_notifyAssetsUpdate;
- (void)addObserver:(id)a0;
- (id)_getCurrentHEPAsset;
- (id)getCurrentOSDAsset;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)_updateOEPAssetsWithLanguage:(id)a0;
- (void)assetStatus:(id)a0;
- (id)_getFakeEndpointAsset;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (void)checkFirstUnlocked;
- (id)init;
- (id)_getOEPVersionFromPath:(id)a0;
- (id)getCurrentEndpointerAsset;
- (void).cxx_destruct;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;

@end
