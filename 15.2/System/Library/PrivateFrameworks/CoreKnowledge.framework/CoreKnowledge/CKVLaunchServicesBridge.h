@class NSString;

@interface CKVLaunchServicesBridge : NSObject <CKVProviderDatasetBridge> {
    unsigned long long _options;
    NSString *_languageCode;
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
- (id)initWithFetchOptions:(unsigned long long)a0 languageCode:(id)a1;
- (BOOL)_checkAppValidity:(id)a0 options:(unsigned long long)a1;
- (id)_appEnumerator;

@end
