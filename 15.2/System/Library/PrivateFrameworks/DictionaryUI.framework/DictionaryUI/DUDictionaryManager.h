@class NSArray;

@interface DUDictionaryManager : NSObject {
    BOOL _initiallyEmptyAssets;
}

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (id)_definitionValuesForTerm:(id)a0;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (id)_dictionaryAssetType;
- (id)_availableDictionaryAssets;
- (void).cxx_destruct;
- (id)init;
- (id)_allAvailableDefinitionDictionaries;
- (long long)_compareOrderOfDictionary:(id)a0 withDictionary:(id)a1;
- (void)_migrateInstalledStateForNewDictionaries:(id)a0;
- (void)_downloadDictionaryAssetCatalogWithTimeout:(long long)a0 completion:(id /* block */)a1;

@end
