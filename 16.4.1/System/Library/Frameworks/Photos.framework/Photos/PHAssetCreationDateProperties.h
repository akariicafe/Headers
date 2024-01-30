@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (id)propertiesToSortBy;
+ (long long)cacheSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;

@end
