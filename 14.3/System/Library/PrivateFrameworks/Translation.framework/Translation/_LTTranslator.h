@class NSXPCConnection;

@interface _LTTranslator : NSObject {
    NSXPCConnection *_connection;
}

@property (class, copy, nonatomic) id /* block */ interruptionHandler;

+ (void)initialize;
+ (void)installedLocales:(id /* block */)a0;
+ (void)_clearCaches;
+ (void)_getServiceProxyWithDelegate:(id)a0 errorHandler:(id /* block */)a1 block:(id /* block */)a2;
+ (void)_getSyncServiceProxyWithDelegate:(id)a0 errorHandler:(id /* block */)a1 block:(id /* block */)a2;
+ (void)_offlineLanguageStatus:(id /* block */)a0;
+ (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_purgeAllAssets:(id /* block */)a0;
+ (void)_updateAllAssets:(id /* block */)a0;
+ (void)_getAssetSize:(id /* block */)a0;
+ (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
+ (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
+ (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
+ (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
+ (void)languageForText:(id)a0 completion:(id /* block */)a1;
+ (void)languagesForText:(id)a0 completion:(id /* block */)a1;
+ (void)installOfflineLocales:(id)a0 completion:(id /* block */)a1;
+ (void)taskIsSupportedInCurrentRegion:(long long)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)cleanup;
- (void)log:(id)a0;
- (void)translate:(id)a0;
- (void)preheatForRequestSync:(id)a0;
- (void)preheatForRequest:(id)a0 completion:(id /* block */)a1;
- (id)startTranslationSession;

@end
