@interface SFSpeechAssetManager : NSObject

+ (void)fetchAssetsForLanguage:(id)a0 urgent:(BOOL)a1 forceUpgrade:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)_assetQueryForLanguage:(id)a0;
+ (id)assetPathForLanguage:(id)a0;
+ (id)configParametersForVoicemailWithLanguage:(id)a0;
+ (void)fetchAssetsForLanguage:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(BOOL)a1 forceUpgrade:(BOOL)a2 detailedProgress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)installedLanguages;
+ (void)installedLanguagesWithCompletion:(id /* block */)a0;
+ (void)promoteAssets;
+ (void)purgeAssetsForLanguage:(id)a0 error:(id *)a1;
+ (void)setAssetsAsProvisional;
+ (void)setAssetsPurgeability:(BOOL)a0 exceptLanguages:(id)a1 error:(id *)a2;
+ (void)setAssetsPurgeability:(BOOL)a0 forLanguages:(id)a1 error:(id *)a2;

@end
