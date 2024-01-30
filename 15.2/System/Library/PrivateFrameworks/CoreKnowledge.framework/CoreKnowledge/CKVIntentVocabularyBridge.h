@class CKVIntentVocabularyStoreManager, NSString, NSDictionary, CKVIntentVocabularyAuthorization, NSArray;

@interface CKVIntentVocabularyBridge : NSObject <CKVProviderMultiDatasetBridge> {
    CKVIntentVocabularyStoreManager *_vocabularyStoreManager;
    CKVIntentVocabularyAuthorization *_vocabularyAuthorization;
    NSDictionary *_allAppsOverview;
    NSString *_currentAppId;
    NSArray *_currentIntentSlots;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (id)originApp;
- (BOOL)enumerateVocabularyItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)initWithVocabularyStoreManager:(id)a0 vocabularyAuthorization:(id)a1;
- (id)_readAllVocabularyForApp:(id)a0 withIntentSlots:(id)a1;

@end
