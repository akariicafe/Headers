@class NSArray;

@interface _UIDictionaryManager : NSObject

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (id)init;
- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (id)_definitionValuesForTerm:(id)a0;
- (id)_dictionaryAssetType;
- (void)_downloadDictionaryAssetCatalog:(id /* block */)a0;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (BOOL)_isTTYEnabled;

@end
