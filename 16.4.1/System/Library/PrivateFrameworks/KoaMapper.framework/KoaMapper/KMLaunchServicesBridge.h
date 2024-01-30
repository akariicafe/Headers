@class NSString, KVItemMapper, NSDictionary;

@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge> {
    unsigned long long _options;
    KVItemMapper *_itemMapper;
    NSDictionary *_additionalFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (id)init;
- (id)originAppId;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)_appEnumerator;
- (BOOL)_checkAppValidity:(id)a0 options:(unsigned long long)a1;
- (id)initWithFetchOptions:(unsigned long long)a0 languageCodes:(id)a1;

@end
