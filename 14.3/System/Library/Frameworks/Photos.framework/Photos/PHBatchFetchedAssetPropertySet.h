@class NSString, NSArray, NSKnownKeysDictionary, NSManagedObjectID;

@interface PHBatchFetchedAssetPropertySet : NSObject <PHBatchFetchedPropertySet>

@property (class, readonly, copy, nonatomic) NSString *entityName;
@property (class, readonly, nonatomic) NSArray *propertiesToFetch;
@property (class, readonly, nonatomic) NSString *fetchType;
@property (class, readonly, nonatomic) long long batchSize;
@property (class, readonly, nonatomic) long long cacheSize;
@property (class, readonly, nonatomic) BOOL useNoIndexSelf;
@property (class, readonly, nonatomic) BOOL useObjectFetchingContext;
@property (class, readonly, nonatomic) NSArray *propertiesToSortBy;

@property (readonly, nonatomic) NSKnownKeysDictionary *knownKeysDictionary;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
