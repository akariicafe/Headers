@class NSString, NSData, NSMutableOrderedSet;

@interface PLLimitedLibraryFetchFilter : PLManagedObject {
    NSMutableOrderedSet *_assetUUIDs;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *designatedRequirement;
@property (retain, nonatomic) NSData *fetchFilterData;

+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)a0 forApplicationIdentifier:(id)a1;
+ (id)_decodeFetchFilterData:(id)a0 withUUIDHandler:(id /* block */)a1 resultHandler:(id /* block */)a2;
+ (id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 inManagedObjectContext:(id)a2;
+ (void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:(id)a0 inManagedObjectContext:(id)a1;
+ (void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:(id)a0;
+ (id)entityNameToPredicateMapFromFetchFilterData:(id)a0;
+ (id)disallowedAlbumKinds;
+ (id)_assetUUIDStringsFromFetchFilterData:(id)a0;
+ (id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:(id)a0;
+ (id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:(id)a0 inManagedObjectContext:(id)a1;
+ (id)fetchFilterIdentifierForApplicationIdentifier:(id)a0;
+ (id)_fetchFiltersMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;

- (void).cxx_destruct;
- (void)addAssetsWithUUIDs:(id)a0;
- (BOOL)containsAssetWithUUID:(id)a0;
- (void)removeAllAssets;
- (id)assetUUIDStrings;
- (id)predicateForEntityName:(id)a0;
- (void)_loadAssetUUIDs;
- (id)debugDescription;

@end
