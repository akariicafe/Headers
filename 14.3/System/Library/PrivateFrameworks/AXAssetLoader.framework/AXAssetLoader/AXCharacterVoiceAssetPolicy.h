@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy

@property (retain, nonatomic) NSString *language;

+ (id)characterVoiceAssetPolicyWithLanguage:(id)a0;

- (id)assetType;
- (id)init;
- (void).cxx_destruct;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;

@end
