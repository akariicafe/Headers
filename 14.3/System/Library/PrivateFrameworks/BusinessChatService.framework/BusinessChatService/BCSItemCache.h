@class BCSLinkItemPersistentStore, BCSBusinessItemMemoryCache, NSString;
@protocol BCSUserDefaultsProviding;

@interface BCSItemCache : NSObject <BCSItemCaching, BCSLinkItemCacheClearing, BCSBatchable>

@property (retain, nonatomic) BCSBusinessItemMemoryCache *chatSuggestItemStore;
@property (retain, nonatomic) BCSLinkItemPersistentStore *linkItemStore;
@property (retain, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)endBatch;
- (void)beginBatch;
- (id)itemMatching:(id)a0;
- (void)deleteItemMatching:(id)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (void)deleteItemsOfType:(long long)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)deleteLinkItemsWithBundleID:(id)a0;

@end
