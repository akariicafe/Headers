@class NSMutableDictionary;

@interface PLRelationshipOrderKeyManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_locationsCache;
    NSMutableDictionary *_enqueuedFolderAlbumsOrderValueUpdates;
    NSMutableDictionary *_enqueuedAlbumAssetsOrderValueUpdates;
}

@property BOOL inWriteStashedLocationMode;
@property (copy, nonatomic) id /* block */ generateContextBlock;
@property (readonly, nonatomic) BOOL hasStashedLocationValues;
@property (readonly, nonatomic) BOOL conflictDetected;

+ (id)new;
+ (long long)compareOrderKeyObject:(id)a0 withObject:(id)a1;

- (id)initWithGenerateContextBlock:(id /* block */)a0;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id *)a0 albums:(id *)a1 conflictDetected:(BOOL *)a2;
- (void)_migration_updateOrderValuesForAssetsInAlbum:(id)a0 managedObjectContext:(id)a1;
- (id)_orderingStateForRelationship:(id)a0 onObjectWithID:(id)a1 usingSPISafeContext:(id)a2;
- (unsigned long long)findIndexForAlbumWithID:(id)a0 newOrderValue:(long long)a1 inFolderWithID:(id)a2 hasOrderValueConflictWithAlbumID:(id *)a3 inContext:(id)a4;
- (void)getConflictResolutionOrderValuesForRelationship:(id)a0 onObjectWithID:(id)a1 atIndex:(unsigned long long)a2 intoLower:(long long *)a3 higher:(long long *)a4 inContext:(id)a5;
- (void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)a0 childToOrderKeyMap:(id)a1;
- (void)updateKeyAssetsForAlbums:(id)a0 inLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)a0 inLibrary:(id)a1;
- (void)migration_ensureValidOrderKey:(id)a0 usingOrderValuePropertyKey:(id)a1;
- (id)objectIDsAndOrderValuesForRelationship:(id)a0 onObjectWithID:(id)a1 invalidateCache:(BOOL)a2 inContext:(id)a3;
- (BOOL)writeStashedLocationValuesInContext:(id)a0 error:(id *)a1;
- (void)_stashLocationValue:(long long)a0 forOrderedObjectWithID:(id)a1 inSourceObjectID:(id)a2 relationship:(id)a3 atIndex:(unsigned long long)a4 usingStashDictionary:(id)a5 usingSPISafeContext:(id)a6;
- (id)_locked_enqueuedFolderAlbumsOrderValueUpdates;
- (void)migration_fixupOrderKeys:(id)a0 usingOrderValuePropertyKey:(id)a1 enforceSingletonAlbumReservedKeySpace:(BOOL)a2;
- (id)_locked_enqueuedAlbumAssetsOrderValueUpdates;
- (void)stashFolderAlbumsLocationValue:(long long)a0 forAlbumWithID:(id)a1 inFolderWithID:(id)a2 atIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)_setConflictDetected:(BOOL)a0;
- (id)init;
- (void)stashAlbumAssetsLocationValue:(long long)a0 forAssetWithID:(id)a1 inAlbumWithID:(id)a2 atIndex:(unsigned long long)a3;
- (void)_updateOrderOfChildrenInParent:(id)a0 usingTransientOrders:(id)a1;
- (id)parentFolderOrderValueForAlbum:(id)a0 inManagedObjectContext:(id)a1;
- (id)_orderingStateForRelationship:(id)a0 onObjectWithID:(id)a1 invalidateCache:(BOOL)a2 usingSPISafeContext:(id)a3;
- (id)albumsAndOrderValuesForAsset:(id)a0 inManagedObjectContext:(id)a1;
- (id)_locked_locationsCache;
- (void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)a0 managedObjectContext:(id)a1;
- (void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)a0;
- (id)migration_sortedOrderKeysForAssetsInAlbum:(id)a0 usingMap:(id)a1;
- (unsigned long long)findIndexForAssetWithID:(id)a0 newOrderValue:(long long)a1 inAlbumWithID:(id)a2 hasOrderValueConflictWithAssetID:(id *)a3 inContext:(id)a4;

@end
