@class NSArray, NSString, PHQuery, NSDate, NSManagedObjectID;

@interface PHCollectionList : PHCollection {
    NSString *_localizedTitle;
    NSManagedObjectID *_parentFolderObjectID;
    int _plAlbumKind;
}

@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) PHQuery *query;
@property (readonly, copy, nonatomic) id /* block */ childCollectionsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAssetCollectionsCount;
@property (readonly, nonatomic) unsigned long long estimatedChildCollectionCount;
@property (readonly, nonatomic) BOOL keyCollectionsAtEnd;
@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) long long collectionListType;
@property (readonly, nonatomic) long long collectionListSubtype;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *localizedLocationNames;

+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)fetchCollectionListsContainingCollection:(id)a0 options:(id)a1;
+ (id)fetchCollectionListsForReferences:(id)a0 photoLibrary:(id)a1;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchCollectionListsWithType:(long long)a0 subtype:(long long)a1 options:(id)a2;
+ (id)fetchMomentListsWithSubtype:(long long)a0 containingMoment:(id)a1 options:(id)a2;
+ (id)fetchMomentListsWithSubtype:(long long)a0 options:(id)a1;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)a0;
+ (id)fetchRootProjectCollectionListWithOptions:(id)a0;
+ (id)transientCollectionListWithAssetCollections:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithAssetCollections:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)transientCollectionListWithCollections:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithCollections:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)transientCollectionListWithCollections:(id)a0 title:(id)a1 identifier:(id)a2 photoLibrary:(id)a3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)a0 title:(id)a1 identifier:(id)a2;

- (BOOL)canPerformEditOperation:(long long)a0;
- (id)localizedTitle;
- (id)objectReference;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasLocationInfo;
- (BOOL)canContainCollections;
- (Class)changeRequestClass;
- (unsigned long long)collectionFixedOrderPriority;
- (BOOL)collectionHasFixedOrder;
- (id)effectiveCustomSortKey;
- (id)initTransientWithCollections:(id)a0 orQuery:(id)a1 title:(id)a2 identifier:(id)a3 photoLibrary:(id)a4;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)parentFolderID;
- (id)pl_assetContainerList;

@end
