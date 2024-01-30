@interface SFSpeechAssetManager : NSObject

+ (id)installedLanguages;
+ (void)installedLanguagesWithCompletion:(id /* block */)a0;
+ (void)setAssetsAsProvisional;
+ (void)promoteAssets;
+ (id)fetchMAAssetPathForInstalledLanguage:(id)a0;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)_assetQueryForLanguage:(id)a0;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(BOOL)a1 forceUpgrade:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)fetchAssetsForLanguage:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(BOOL)a1 forceUpgrade:(BOOL)a2 detailedProgress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)assetPathForLanguage:(id)a0;
+ (id)configParametersForVoicemailWithLanguage:(id)a0;
+ (void)purgeAssetsForLanguage:(id)a0 error:(id *)a1;

@end
