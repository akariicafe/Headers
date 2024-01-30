@class NSArray, CNManagedConfiguration;
@protocol CNiOSContactPredicate;

@interface CNiOSPersonFetchRequest : NSObject

@property (readonly) id<CNiOSContactPredicate> predicate;
@property (readonly) BOOL shouldSort;
@property (readonly) unsigned long long options;
@property (readonly) unsigned int sortOrder;
@property (readonly) unsigned int sortOrderIncludingNone;
@property (readonly) NSArray *keysToFetch;
@property (readonly) BOOL unifiedFetch;
@property (readonly) unsigned long long batchSize;
@property (readonly) CNManagedConfiguration *managedConfiguration;

+ (long long)resolvedSortOrderFromContactSortOrder:(long long)a0;
+ (id)validatePredicate:(id)a0 error:(id *)a1;
+ (id)effectivePredicate:(id)a0;
+ (id)fetchRequestFromCNFetchRequest:(id)a0 managedConfiguration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 keysToFetch:(id)a1 shouldSort:(BOOL)a2 sortOrder:(unsigned int)a3 unifiedFetch:(BOOL)a4 batchSize:(unsigned long long)a5 managedConfiguration:(id)a6 options:(unsigned long long)a7;

@end
