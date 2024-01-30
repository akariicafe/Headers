@class NSDictionary, NSHashTable, NPTOLibraryInfo, NRDevice;

@interface NPTOCollectionTargetLibrary : NSObject {
    NSHashTable *_observers;
    NPTOLibraryInfo *_libraryInfo;
    id _libraryCollectionTargetMapChangeObserver;
    id _syncingChangeObserver;
    NSDictionary *_libraryAssetCollections;
}

@property (readonly, nonatomic) long long collectionTarget;
@property (readonly, nonatomic) NRDevice *device;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)_isSyncing;
- (id)fetchAssetsInAssetCollection:(id)a0 options:(id)a1;
- (id)fetchAssetsWithOptions:(id)a0;
- (id)fetchKeyAssetsInAssetCollection:(id)a0 options:(id)a1;
- (id)assetCollections;
- (id)_libraryInfo;
- (id)initWithCollectionTarget:(long long)a0 device:(id)a1;
- (void)_createLibraryCollectionTargetMapChangeObserverIfNeeded;
- (void)_createSyncingChangeObserverIfNeeded;
- (id)_libraryAssetCollections;
- (id)_libraryAssetUUIDs;
- (void)_handleLibraryCollectionTargetMapDidChange;
- (void)_handleSyncingDidChange;
- (unsigned long long)countOfAssetsWithOptions:(id)a0;
- (unsigned long long)countOfAssetsInAssetCollection:(id)a0 options:(id)a1;
- (unsigned long long)expectedCountOfAssets;
- (unsigned long long)expectedCountOfAssetsInAssetCollection:(id)a0;
- (BOOL)isSyncingAssets;
- (BOOL)isSyncingAssetsInAssetCollection:(id)a0;

@end
