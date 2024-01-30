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

- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (id)_getCurrentHEPAsset;
- (void)checkFirstUnlocked;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)assetStatus:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (void).cxx_destruct;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (id)init;
- (id)_getOEPVersionFromPath:(id)a0;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (id)getCurrentOSDAsset;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (void)_updateOEPAssetsWithLanguage:(id)a0;
- (void)_notifyAssetsUpdate;
- (id)getCurrentEndpointerAsset;

@end
