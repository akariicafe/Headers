@class NSString, NSOrderedSet;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;
@property (retain, nonatomic) NSOrderedSet *childCollections;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (id)childKeyForOrdering;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)localizedRecoveredTitle;
+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;
+ (id)validKindsForPersistence;

- (void)didSave;
- (BOOL)albumHasFixedOrder:(id)a0;
- (BOOL)isValidForPersistence;
- (id)assets;
- (id)albums;
- (unsigned long long)approximateCount;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (id)containers;
- (id)identifier;
- (id)mutableAssets;
- (void)prepareForDeletion;
- (unsigned long long)assetsCount;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (id)childKeyForOrdering;
- (id)payloadForChangedKeys:(id)a0;
- (unsigned long long)photosCount;
- (BOOL)canEditContainers;
- (BOOL)canPerformDeleteOperation;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (unsigned long long)videosCount;
- (void)willSave;
- (BOOL)needsReordering;
- (void)refreshCollections;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)isEmpty;
- (short)albumListType;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (unsigned long long)count;
- (id)containersRelationshipName;
- (void)insertObject:(id)a0 inChildCollectionsAtIndex:(unsigned long long)a1;
- (void)addChildCollectionsObject:(id)a0;
- (void)insertChildCollections:(id)a0 atIndexes:(id)a1;
- (void)removeChildCollectionsAtIndexes:(id)a0;
- (void)replaceChildCollectionsAtIndexes:(id)a0 withChildCollections:(id)a1;
- (void)moveChildCollectionsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)addChildCollections:(id)a0;
- (void)removeChildCollections:(id)a0;
- (void)setNeedsReordering;
- (void)enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)a0;
- (void)_enforceFixedOrderKeyCompliance;
- (void)_enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)a0;
- (void)removeChildCollectionsObject:(id)a0;
- (BOOL)canEditAlbums;
- (void)updateAlbumsOrderIfNeeded;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)descriptionOfChildCollectionOrderValues;

@end
