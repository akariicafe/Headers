@class NSArray;

@interface _UIDictionaryManager : NSObject

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isTTYEnabled;
- (id)_allAvailableDefinitionDictionaries;
- (void)_downloadDictionaryAssetCatalog:(id /* block */)a0;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (id)_definitionValuesForTerm:(id)a0;
- (id)_dictionaryAssetType;
- (id)_availableDictionaryAssets;

@end
