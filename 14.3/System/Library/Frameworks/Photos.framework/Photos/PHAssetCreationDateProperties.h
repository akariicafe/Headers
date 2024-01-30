@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (long long)cacheSize;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (id)propertiesToFetch;

@end
