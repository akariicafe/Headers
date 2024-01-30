@class KVItemMapper, NSString, NSArray, KMIntentVocabularyStoreManager, KMIntentVocabularyAuthorization;

@interface KMIntentVocabularyDatasetBridge : NSObject <KMProviderDatasetBridge> {
    NSString *_appId;
    NSArray *_intentSlots;
    KMIntentVocabularyStoreManager *_storeManager;
    KMIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (id)originAppId;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithAppId:(id)a0 intentSlots:(id)a1 storeManager:(id)a2 authorization:(id)a3 itemMapper:(id)a4;

@end
