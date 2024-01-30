@class NSArray, NSDictionary, MAAsset, _LTOfflineAssetManager, _LTLocalePair;

@interface _LTSpeechTranslationAssetInfo : NSObject {
    _LTOfflineAssetManager *_assetManager;
    _LTLocalePair *_localePair;
    NSDictionary *_pairDictionary;
    MAAsset *_sourceASRModel;
    MAAsset *_targetASRModel;
    NSArray *_allAssets;
    NSArray *_mtAssets;
    NSArray *_missingAssets;
    NSArray *_missingMTAssets;
    BOOL _needsUpdate;
    NSArray *_modelURLs;
}

+ (void)initialize;

- (id)description;
- (void).cxx_destruct;
- (void)_createSymlinkDirectoryForAssets:(id)a0;
- (id)_getTranslationConfig;
- (id)_languagePairDirectory;
- (unsigned long long)_mtModelOfflineState;
- (BOOL)_validateSymlinksForAssets:(id)a0;
- (id)availabilityInfo;
- (void)createSymlinkDirectoryForMTAssets;
- (void)downloadAssetsUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithInstalledAssets:(id)a0 catalogAssets:(id)a1 localePair:(id)a2 configInfo:(id)a3 assetManager:(id)a4;
- (BOOL)isCompleteBidirectionalModel;
- (BOOL)isCompletePassthroughModel;
- (void)purgeAssetUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)referenceAssets:(id)a0 catalogAssets:(id)a1;
- (id)speechModelURLForLocale:(id)a0;
- (id)speechModelVersionForLocale:(id)a0;
- (id)translationModelURLs;
- (BOOL)updateAvailableInAssets:(id)a0;

@end
