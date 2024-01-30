@class NSString, CNContactStore;

@interface CKVContactStoreBridge : NSObject <CKVProviderDatasetBridge> {
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactFetchKeys;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (Class)itemClass;
- (id)init;
- (id)originApp;
- (BOOL)enumerateVocabularyItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
