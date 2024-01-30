@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface VSMobileAssetsManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue;
@property (retain, nonatomic) NSCache *cachedVoiceSelections;
@property (retain, nonatomic) NSCache *cachedVoiceResources;

+ (void)amendVoiceWithDefaultSettings:(id)a0;
+ (id)sharedManager;
+ (id)pickCorrectAssetFromLocalAssets:(id)a0;
+ (id)preinstallAssetsDirectory;
+ (id)queryForVoiceResourceAsset:(id)a0 returnTypes:(long long)a1;
+ (id)voiceResourceFromAsset:(id)a0;
+ (id)bundleIdentifierForVoiceType:(long long)a0;
+ (void)amendVoice:(id)a0 withDefaultSettingsFrom:(id)a1;
+ (BOOL)isVoiceAssetWellDefined:(id)a0;
+ (id)getLatestAssetFromArray:(id)a0;
+ (id)downloadOptionsWithBattery:(BOOL)a0;
+ (id)queryForLanguage:(id)a0 forType:(long long)a1 voicename:(id)a2 gender:(long long)a3 footprint:(long long)a4 returnTypes:(long long)a5;
+ (long long)typeFromBundleIdentifier:(id)a0;

- (void)_downloadAsset:(id)a0 options:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)downloadVoiceResource:(id)a0 completion:(id /* block */)a1;
- (id)cleanUnusedVoiceAssets;
- (id)voiceDataWithBundleIdentifier:(id)a0 attributes:(id)a1 voicePathCallback:(id /* block */)a2;
- (id)selectPreinstalledVoiceForLanguage:(id)a0 gender:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_localVoiceForLanguage:(id)a0 gender:(long long)a1;
- (void)resetResourcesCache;
- (void)cancelResourceDownload:(id)a0 completion:(id /* block */)a1;
- (BOOL)cancelDownloads:(id)a0 error:(id *)a1;
- (void)downloadVoiceAsset:(id)a0 options:(id)a1 progressUpdateHandler:(id /* block */)a2;
- (void)cancelDownload:(id)a0 completion:(id /* block */)a1;
- (void)downloadVoiceAsset:(id)a0 useBattery:(BOOL)a1 progressUpdateHandler:(id /* block */)a2;
- (void)amendVoiceAssetWithLatestKnownData:(id)a0;
- (void)migrateAssetIfNeededWithAssetType:(id)a0;
- (id)selectVoiceForLang:(id)a0 type:(long long)a1 gender:(long long)a2 footprint:(long long)a3;
- (void)cleanOldVoiceResources;
- (id)voiceDataFromAsset:(id)a0;
- (id)selectVoiceResourceAssetForLanguage:(id)a0;
- (void)removeVoiceResource:(id)a0 completion:(id /* block */)a1;
- (void)amendVoiceWithDefaultSettings:(id)a0;
- (id)_nonCacheVoiceSelectionForLanguage:(id)a0 type:(long long)a1 gender:(long long)a2 footprint:(long long)a3;
- (id)builtInVoices;
- (id)inactiveVoiceAssets;
- (id)_installedVoiceResourceAssetForLanguage:(id)a0;
- (void)migrateAssets;
- (id)downloadCatalog:(id)a0 options:(id)a1;
- (void)_purgeAsset:(id)a0;
- (id)_getVoiceAssetsForType:(long long)a0 voicename:(id)a1 language:(id)a2 gender:(long long)a3 footprint:(long long)a4 returnTypes:(long long)a5;
- (id)installedVoiceResources;
- (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)a0;
- (void)downloadCatalog:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)activeVoiceAssets;
- (id)_getResults:(id)a0;
- (void)downloadVoiceResource:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)preinstalledVoicesForLanguage:(id)a0 gender:(long long)a1;
- (id)voiceAssetFromPreinstallMetadata:(id)a0;
- (id)installedAssetsForType:(long long)a0 voicename:(id)a1 language:(id)a2 gender:(long long)a3 footprint:(long long)a4;
- (void)purgeAsset:(id)a0;
- (void)removeVoiceAsset:(id)a0 completion:(id /* block */)a1;
- (id)_builtInVoiceForLanguage:(id)a0;
- (void)downloadVoiceResourceCatalogWithCompletion:(id /* block */)a0;
- (id)voiceAssetWithName:(id)a0 localOnly:(BOOL)a1 outError:(id *)a2;
- (id)installedLocalVoices;
- (void)resetCache;
- (id)preinstallAssetsMetadata;

@end
