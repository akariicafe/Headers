@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (id)propertiesToSortBy;
+ (long long)cacheSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;

@end
