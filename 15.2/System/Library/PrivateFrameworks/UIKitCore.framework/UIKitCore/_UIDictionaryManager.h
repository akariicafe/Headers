@class NSArray;

@interface _UIDictionaryManager : NSObject

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (id)_definitionValuesForTerm:(id)a0;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (BOOL)_isTTYEnabled;
- (id)_dictionaryAssetType;
- (id)_availableDictionaryAssets;
- (void).cxx_destruct;
- (id)init;
- (id)_allAvailableDefinitionDictionaries;
- (void)_downloadDictionaryAssetCatalog:(id /* block */)a0;

@end
