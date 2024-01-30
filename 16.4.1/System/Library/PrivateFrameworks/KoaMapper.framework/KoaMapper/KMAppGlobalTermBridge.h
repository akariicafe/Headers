@class NSString, KVItemMapper, NSURL;

@interface KMAppGlobalTermBridge : NSObject <KMProviderDatasetBridge> {
    NSString *_appId;
    KVItemMapper *_itemMapper;
    NSURL *_appIntentVocabURL;
    struct __CFBundle { } *_cfbundle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (void)dealloc;
- (id)init;
- (id)originAppId;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDeletedOriginAppId:(id)a0 itemMapper:(id)a1;
- (id)initWithOriginAppId:(id)a0 languageCode:(id)a1 itemMapper:(id)a2;

@end
