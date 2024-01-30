@class NSMutableSet, NSMutableDictionary;

@interface MSASPendingChanges : NSObject

@property (retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithKeyValueChanges;
@property (retain, nonatomic) NSMutableSet *pendingAlbumChanges;
@property (retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithSharingInfoChanges;
@property (retain, nonatomic) NSMutableDictionary *pendingAlbumGUIDToAssetCollections;

- (BOOL)hasPendingChanges;
- (void).cxx_destruct;
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)a0 albumChanges:(id)a1 accessControlChangesForAlbumGUIDS:(id)a2;
- (void)removePendingKeyValueChangesForAlbumGUID:(id)a0;
- (void)addPendingChangesForAlbumGUID:(id)a0;
- (void)removePendingChangesForAlbumGUID:(id)a0;
- (void)addPendingAssetCollectionChanges:(id)a0 forAlbumGUID:(id)a1;
- (void)removePendingAssetCollection:(id)a0 forAlbumGUID:(id)a1;
- (void)removePendingSharingInfoChangesForAlbumGUID:(id)a0;

@end
