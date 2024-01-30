@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (id)propertiesToSortBy;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;

@end
