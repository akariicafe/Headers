@class NSArray, PPQuickTypeQuery, NSDate;

@interface PPQuickTypeItemCacheEntry : NSObject {
    NSArray *items;
    PPQuickTypeQuery *query;
    NSDate *cachedAtDate;
}

- (void).cxx_destruct;

@end
