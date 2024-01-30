@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject <BCSItemCaching>

@property (retain, nonatomic) BCSBusinessItem *bizItemForLastFetchedIcon;
@property (retain, nonatomic) NSData *lastFetchedBusinessItemIconData;
@property (retain, nonatomic) BCSBusinessItem *lastFetchedBusinessItem;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)deleteCache;
- (id)itemMatching:(id)a0;
- (void)deleteItemMatching:(id)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (void)deleteItemsOfType:(long long)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (id)lastFetchedBusinessItemIconDataForBizItem:(id)a0;
- (void)setLastFetchedBusinesIconData:(id)a0 withMatchingBusinessItem:(id)a1;

@end
