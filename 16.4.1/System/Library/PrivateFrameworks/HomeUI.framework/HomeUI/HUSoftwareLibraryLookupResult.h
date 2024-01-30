@class NSSet, NSDictionary;

@interface HUSoftwareLibraryLookupResult : NSObject

@property (retain, nonatomic) NSSet *matchedLibraryItems;
@property (retain, nonatomic) NSDictionary *accessoriesByBundleIDs;
@property (retain, nonatomic) NSSet *matchedStoreItems;
@property (retain, nonatomic) NSDictionary *accessoriesByStoreIDs;
@property (retain, nonatomic) NSSet *unmatchedRequests;

+ (id)_libraryResultForRequests:(id)a0;
+ (id)_storeResultForRequests:(id)a0;
+ (id)resultForAccessories:(id)a0;
+ (id)resultForRequests:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
