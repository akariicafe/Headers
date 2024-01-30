@interface _LTOfflineAssetManager : NSObject

+ (void)initialize;
+ (id)fallBackAssetResourcePath;

- (id)init;
- (id)configurationPropertyListWithName:(id)a0;
- (id)CDN_propertyList;
- (id)endpointAssetInfoWithContext:(id)a0 error:(id *)a1;
- (id)_configPlistWithFileName:(id)a0;
- (void)downloadAsset:(id)a0 userInitiated:(BOOL)a1 useCellular:(BOOL)a2 progressCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (id)catalogAssets;
- (id)installedAssets;
- (id)_voiceAssetForLocaleIdentifier:(id)a0;
- (id)matchingASRAssetForLocale:(id)a0 inAssets:(id)a1;
- (id)modelURLForLanguagePair:(id)a0;
- (void)_clearCaches;
- (id)assetDirectory;
- (id)configAsset;
- (void)downloadAsset:(id)a0 userInitiated:(BOOL)a1 progressCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (id)assetIdentifierReferenceCountDictionary;
- (void)deleteAsset:(id)a0 completion:(id /* block */)a1;
- (void)_removeOldAssetDirectory;
- (id)configAssetInAssets:(id)a0;
- (void)updateAllAssets:(id /* block */)a0;
- (void)_refreshAllAssets:(id /* block */)a0;
- (void)_refreshCatalogIfNeededWithCompletion:(id /* block */)a0;
- (id)assetsSortedByVersion:(id)a0;
- (void)downloadAsset:(id)a0 downloadOptions:(id)a1 progressCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)debugDumpAssets:(id)a0;
- (id)_speechTranslationAssetInfoForLocalePair:(id)a0 installedAssets:(id)a1 catalogAssets:(id)a2 config:(id)a3 error:(id *)a4;
- (void)_queryLanguagePairStatus:(id /* block */)a0;
- (void)_downloadVoiceAsset:(id)a0;
- (id)_assetIdentifiersForLanguagePairDirectory:(id)a0;
- (id)_speechTranslationAssetInfoForLocalePair:(id)a0 error:(id *)a1;
- (void)updateSpeechTranslationAssetSymLinks:(id)a0;
- (void)downloadVoiceAssetsForLanguagePair:(id)a0;
- (void)refreshAllIfNeededWithCompletion:(id /* block */)a0;
- (void)_downloadPassthroughAssetForLocale:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)getEndpointerAssetWithType:(long long)a0 error:(id *)a1;
- (id)configurationPropertyListWithURL:(id)a0;
- (id)configAssetURL;
- (void)offlineLanguageStatus:(id /* block */)a0;
- (void)purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)assetSize:(id /* block */)a0;
- (void)purgeAllAssetsExcludingConfig:(BOOL)a0 completion:(id /* block */)a1;
- (void)downloadAssetsForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)speechTranslationAssetInfoForLocalePair:(id)a0 error:(id *)a1;
- (id)languageDetectorAssetWithError:(id *)a0;

@end
