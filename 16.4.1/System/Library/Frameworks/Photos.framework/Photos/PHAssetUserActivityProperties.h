@class NSDate;

@interface PHAssetUserActivityProperties : PHAssetPropertySet

@property (nonatomic) long long syncedPlayCount;
@property (nonatomic) long long syncedShareCount;
@property (nonatomic) long long syncedViewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (readonly, nonatomic) long long playCount;
@property (readonly, nonatomic) long long shareCount;
@property (readonly, nonatomic) long long viewCount;
@property (readonly, copy, nonatomic) NSDate *lastViewedDate;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
