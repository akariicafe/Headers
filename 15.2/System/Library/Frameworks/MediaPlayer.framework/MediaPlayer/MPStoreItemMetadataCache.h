@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
}

@property (readonly, nonatomic) long long count;

- (id)addMetadata:(id)a0 forItemIdentifier:(id)a1;
- (id)initWithCacheSize:(long long)a0;
- (id)metadataForItemIdentifier:(id)a0 ignoreExpiration:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeExpiredMetadata;
- (id)metadataForItemIdentifier:(id)a0;

@end
