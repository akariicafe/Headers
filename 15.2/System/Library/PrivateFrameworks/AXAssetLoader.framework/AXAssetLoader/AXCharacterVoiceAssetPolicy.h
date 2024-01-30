@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy

@property (retain, nonatomic) NSString *language;

+ (id)characterVoiceAssetPolicyWithLanguage:(id)a0;

- (id)assetType;
- (void).cxx_destruct;
- (id)init;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
