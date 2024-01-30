@interface TTSSiriAssetManager : NSObject

+ (void)downloadAsset:(id)a0 progressHandler:(id /* block */)a1;
+ (id)voiceAssetFromTTSAsset:(id)a0;
+ (id)assetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
+ (id)installedAssetsForLanguage:(id)a0 voiceType:(long long)a1;
+ (id)_assetTechnologyForVoiceType:(long long)a0;
+ (BOOL)spaceCheck:(id)a0;
+ (id)_footprintForType:(long long)a0;
+ (id)deprecatedVoicesMap;
+ (id)installedAssetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
+ (id)convertTTSLanguageCodeToSiriLanguageCode:(id)a0;
+ (id)_assetTypesForVoiceType:(long long)a0;
+ (void)purgeAsset:(id)a0;
+ (id)voiceResourceForLanguage:(id)a0 voiceType:(long long)a1 onDiskData:(id)a2;
+ (id)assetsForLanguage:(id)a0 voiceType:(long long)a1;
+ (long long)_voiceTypeForAssetTechnology:(id)a0;
+ (id)_siriAssetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4 locallyAvailable:(BOOL)a5;
+ (void)stopDownload:(id)a0;
+ (id)_siriAssetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
+ (id)_assetFilterForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4 locallyAvailable:(BOOL)a5;
+ (id)_assetsForLanguage:(id)a0 voiceType:(long long)a1 installedOnly:(BOOL)a2;
+ (id)ttsAssetFromVoiceAsset:(id)a0;

@end
