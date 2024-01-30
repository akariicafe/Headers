@class NSMutableDictionary, PLPhotoLibrary, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface PLRelationshipOrderKeyManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_locationsCache;
    NSMutableDictionary *_enqueuedFolderAlbumsOrderValueUpdates;
    NSMutableDictionary *_enqueuedAlbumAssetsOrderValueUpdates;
    NSObject<OS_dispatch_queue> *_locationsCacheQueue;
}

@property BOOL inWriteStashedLocationMode;
@property (readonly, nonatomic) BOOL hasStashedLocationValues;
@property (readonly, nonatomic) BOOL conflictDetected;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)_inq_orderingStateForRelationship:(id)a0 onObjectWithID:(id)a1;
- (void)updateKeyAssetsForAlbums:(id)a0 inLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id *)a0 albums:(id *)a1 conflictDetected:(BOOL *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)migration_fixupOrderKeys:(id)a0 usingOrderValuePropertyKey:(id)a1 enforceSingletonAlbumReservedKeySpace:(BOOL)a2;
- (void)_inq_stashLocationValue:(long long)a0 forOrderedObjectWithID:(id)a1 inSourceObjectID:(id)a2 relationship:(id)a3 atIndex:(unsigned long long)a4 usingStashDictionary:(id)a5;
- (id)_inq_orderingStateForRelationship:(id)a0 onObjectWithID:(id)a1 invalidateCache:(BOOL)a2;
- (id)_enqueuedFolderAlbumsOrderValueUpdates;
- (id)albumsAndOrderValuesForAsset:(id)a0 inManagedObjectContext:(id)a1;
- (void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 managedObjectContext:(id)a1;
- (id)initWithManagedObjectContext:(id)a0;
- (void)stashFolderAlbumsLocationValue:(long long)a0 forAlbumWithID:(id)a1 inFolderWithID:(id)a2 atIndex:(unsigned long long)a3;
- (void)_updateOrderOfChildrenInParent:(id)a0 usingTransientOrders:(id)a1;
- (unsigned long long)findIndexForAssetWithID:(id)a0 newOrderValue:(long long)a1 inAlbumWithID:(id)a2 hasOrderValueConflictWithAssetID:(id *)a3;
- (id)migration_sortedOrderKeysForAssetsInAlbum:(id)a0 usingMap:(id)a1;
- (void)_migration_updateOrderValuesForAssetsInAlbum:(id)a0 managedObjectContext:(id)a1;
- (void)getConflictResolutionOrderValuesForRelationship:(id)a0 onObjectWithID:(id)a1 atIndex:(unsigned long long)a2 intoLower:(long long *)a3 higher:(long long *)a4;
- (id)_enqueuedAlbumAssetsOrderValueUpdates;
- (id)new;
- (id)_locationsCache;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)a0 inLibrary:(id)a1;
- (long long)compareOrderKeyObject:(id)a0 withObject:(id)a1;
- (void)stashAlbumAssetsLocationValue:(long long)a0 forAssetWithID:(id)a1 inAlbumWithID:(id)a2 atIndex:(unsigned long long)a3;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)findIndexForAlbumWithID:(id)a0 newOrderValue:(long long)a1 inFolderWithID:(id)a2 hasOrderValueConflictWithAlbumID:(id *)a3;
- (void)setConflictDetected:(BOOL)a0;
- (id)parentFolderOrderValueForAlbum:(id)a0 inManagedObjectContext:(id)a1;
- (void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)a0 childToOrderKeyMap:(id)a1;
- (void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)a0 managedObjectContext:(id)a1;
- (void)_performForReading:(id /* block */)a0;
- (id)objectIDsAndOrderValuesForRelationship:(id)a0 onObjectWithID:(id)a1 invalidateCache:(BOOL)a2;
- (BOOL)writeStashedLocationValuesInContext:(id)a0 error:(id *)a1;
- (void)migration_ensureValidOrderKey:(id)a0 usingOrderValuePropertyKey:(id)a1;

@end
