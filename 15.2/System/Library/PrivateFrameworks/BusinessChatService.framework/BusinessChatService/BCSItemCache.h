@class NSString, BCSBusinessItemMemoryCache, BCSLinkItemPersistentStore;
@protocol BCSUserDefaultsProviding;

@interface BCSItemCache : NSObject <BCSItemCaching, BCSLinkItemCacheClearing, BCSBatchable> {
    BCSBusinessItemMemoryCache *_chatSuggestItemStore;
    BCSLinkItemPersistentStore *_linkItemStore;
    id<BCSUserDefaultsProviding> _userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemMatching:(id)a0;
- (void)beginBatch;
- (void)deleteLinkItemsWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)deleteItemMatching:(id)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (void)endBatch;
- (void)deleteItemsOfType:(long long)a0;

@end
