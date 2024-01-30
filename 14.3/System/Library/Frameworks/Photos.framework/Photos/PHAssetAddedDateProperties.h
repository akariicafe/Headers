@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (long long)cacheSize;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (id)propertiesToFetch;

@end
