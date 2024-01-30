@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject <BCSItemCaching> {
    BCSBusinessItem *_lastFetchedBusinessItem;
    BCSBusinessItem *_bizItemForLastFetchedIcon;
    NSData *_lastFetchedBusinessItemIconData;
}

- (void).cxx_destruct;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)deleteItemMatching:(id)a0;
- (void)deleteItemsOfType:(long long)a0;
- (id)itemMatching:(id)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;

@end
