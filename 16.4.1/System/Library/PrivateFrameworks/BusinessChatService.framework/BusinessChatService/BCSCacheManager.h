@class NSString;
@protocol BCSDomainItemCaching, BCSItemCaching, BCSShardCacheQueryable, BCSLinkItemCacheClearing;

@interface BCSCacheManager : NSObject <BCSCacheClearing, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSItemCaching, BCSItemCacheSkipping, BCSBatchable, BCSDomainItemCaching> {
    id<BCSShardCacheQueryable> _filterShardCache;
    id<BCSDomainItemCaching> _domainItemCache;
    id<BCSItemCaching, BCSLinkItemCacheClearing> _itemCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endBatch;
- (void)beginBatch;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (id)configItemForType:(long long)a0;
- (long long)countOfExpiredShardsOfType:(long long)a0;
- (long long)countOfShardsOfType:(long long)a0;
- (void)deleteAllDomainItems;
- (void)deleteAllExpiredDomainItems;
- (void)deleteConfigItemForType:(long long)a0;
- (void)deleteDomainItemMatching:(id)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)deleteExpiredShardItemsOfType:(long long)a0;
- (void)deleteItemMatching:(id)a0;
- (void)deleteItemsOfType:(long long)a0;
- (void)deleteShardItemMatching:(id)a0;
- (void)deleteShardItemsOfType:(long long)a0;
- (id)domainItemMatching:(id)a0;
- (id)initWithBloomFilterShardCache:(id)a0 domainItemCache:(id)a1 itemCache:(id)a2;
- (id)itemMatching:(id)a0;
- (id)shardItemMatching:(id)a0;
- (BOOL)shouldSkipCacheForConfigItemOfType:(long long)a0;
- (BOOL)shouldSkipCacheForItemOfType:(long long)a0;
- (BOOL)shouldSkipCacheForShardItemOfType:(long long)a0;
- (void)updateConfigItem:(id)a0 withType:(long long)a1;
- (void)updateDomainItem:(id)a0 withDomainItemIdentifier:(id)a1;
- (void)updateDomainItemsForDomainShard:(id)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (void)updateShardItem:(id)a0 withShardIdentifier:(id)a1;

@end
