@class NSSet, NSString, KVItemMapper;

@interface KMAppGlobalTermMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    NSSet *_modifiedAppIds;
    NSSet *_deletedAppIds;
    NSString *_languageCode;
    KVItemMapper *_itemMapper;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)initWithModifiedOriginAppIds:(id)a0 deletedOriginAppIds:(id)a1 languageCode:(id)a2;

@end
