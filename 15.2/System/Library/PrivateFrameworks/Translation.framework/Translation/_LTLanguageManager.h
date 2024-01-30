@class NSMutableDictionary, NSArray, _LTOfflineAssetManager, NSObject;
@protocol OS_dispatch_queue;

@interface _LTLanguageManager : NSObject {
    _LTOfflineAssetManager *_assetManager;
    NSMutableDictionary *_assetStatusDictionary;
    NSArray *_localeIdentifierList;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _useCellular;
}

+ (id)sharedInstance;
+ (void)initialize;

- (void)updateProgress;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)installedLocales:(id /* block */)a0;
- (id)identifiersInIdentifiers:(id)a0 forLanguageName:(id)a1;
- (id)languageToStatusDictionary;
- (id)installationStatusArray;
- (void)_setInstalledLocales:(id)a0;
- (id)pairNamesForLocales:(id)a0;
- (id)assetNamesForPairNames:(id)a0;
- (id)assetWithName:(id)a0 inAssets:(id)a1;
- (id)identifiersInIdentifiers:(id)a0 forAssetName:(id)a1;
- (void)downloadAsset:(id)a0 withStatus:(id)a1;
- (id)assetsNamesForLocale:(id)a0;
- (void)setInstalledLocales:(id)a0 useCellular:(BOOL)a1 completion:(id /* block */)a2;

@end
