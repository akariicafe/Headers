@class KVItemMapper, KMIntentVocabularyStoreManager, KMIntentVocabularyAuthorization;

@interface KMIntentVocabularyMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    KMIntentVocabularyStoreManager *_storeManager;
    KMIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)initWithStoreManager:(id)a0 authorization:(id)a1;

@end
