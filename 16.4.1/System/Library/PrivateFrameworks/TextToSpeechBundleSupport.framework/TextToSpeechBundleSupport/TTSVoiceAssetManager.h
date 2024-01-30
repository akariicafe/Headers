@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject {
    NSMutableDictionary *_resourceCache;
}

+ (id)sharedInstance;
+ (long long)_downloadCatalogForAssetType:(id)a0;
+ (id)_getLatestAssetFromArray:(id)a0;
+ (id)_nonLocalMobileAssetQueue;
+ (id)queryForVoiceResourceAsset:(id)a0 localOnly:(BOOL)a1;
+ (id)voiceResourceAssetForLanguage:(id)a0 voiceType:(long long)a1 onDiskData:(id)a2;
+ (id)voiceResourceFromAsset:(id)a0 voiceType:(long long)a1;

- (void).cxx_destruct;
- (BOOL)_assetExistsOnDisk:(id)a0;
- (id)_resourcePathForStandardAssets:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
- (BOOL)_voiceAssetExistsOnDisk:(id)a0;
- (id)_voiceAssetForMAAsset:(id)a0 voiceType:(long long)a1;
- (id)_voiceAssetQueryForVoiceName:(id)a0 language:(id)a1 gender:(long long)a2 footprint:(long long)a3 version:(id)a4 voiceType:(long long)a5;
- (id)_voiceAssetQueryResultsPredicateForLanguage:(id)a0 voiceType:(long long)a1;
- (id)convertVSVoiceAssetSelectionsToTTSVoiceAssets:(id)a0 language:(id)a1;
- (void)getCustomVoiceAssetsLocalOnly:(BOOL)a0 language:(id)a1 voiceType:(long long)a2 reply:(id /* block */)a3;
- (id)getInstalledGryphonAssetsForLanguage:(id)a0;
- (id)getInstalledNeuralAssetsForLanguage:(id)a0;
- (id)resourcePathForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4 outAsset:(id *)a5;

@end
