@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (id)propertiesToSortBy;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;

@end
