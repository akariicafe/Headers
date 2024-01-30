@class NSSortDescriptor, NSString, NSArray, NSDate, NSManagedObjectID;
@protocol PHCollectionPresentationHints;

@interface PHCollection : PHObject

@property (readonly, nonatomic) NSManagedObjectID *parentFolderID;
@property (readonly, copy, nonatomic) NSString *effectiveCustomSortKey;
@property (readonly, copy, nonatomic) NSSortDescriptor *defaultSortDescriptor;
@property (readonly, nonatomic) BOOL isAlbumContentSort;
@property (readonly, nonatomic) BOOL isAlbumContentTitleSort;
@property (readonly, nonatomic) BOOL isUserSmartAlbum;
@property (readonly, nonatomic) unsigned long long estimatedPhotosCount;
@property (readonly, nonatomic) unsigned long long estimatedVideosCount;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (readonly, nonatomic) BOOL hasLocationInfo;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic) BOOL customSortAscending;
@property (readonly, nonatomic) unsigned int customSortKey;
@property (readonly, copy, nonatomic) NSArray *effectiveCustomSortDescriptors;
@property (readonly, copy, nonatomic) id<PHCollectionPresentationHints> presentationHints;
@property (readonly, nonatomic) BOOL startsAtEnd;
@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, nonatomic) NSString *localizedTitle;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)fetchCollectionsInCollectionList:(id)a0 options:(id)a1;
+ (id)fetchFilteredAssetCollections:(id)a0 containingAssetsMatchingPredicate:(id)a1;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchMomentsForAssetsWithOIDs:(id)a0 options:(id)a1;
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)a0;
+ (id)predicateForUserCollections;

- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)isDeleted;
- (id)objectReference;
- (id)description;
- (void).cxx_destruct;
- (id)_effectiveSortDescriptorsFromCustomSortKey:(id)a0;
- (unsigned long long)ancestryIndexOfCollectionList:(id)a0 context:(id)a1;
- (unsigned long long)collectionFixedOrderPriority;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
