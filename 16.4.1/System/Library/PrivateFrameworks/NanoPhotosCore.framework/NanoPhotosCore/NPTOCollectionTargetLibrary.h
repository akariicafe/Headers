@class NSDictionary, NSHashTable, NSDate, NPTOLibraryInfo, NRDevice;

@interface NPTOCollectionTargetLibrary : NSObject {
    NSHashTable *_observers;
    NPTOLibraryInfo *_libraryInfo;
    id _libraryCollectionTargetMapChangeObserver;
    id _syncingChangeObserver;
    id _syncNeededChangeObserver;
    NSDictionary *_libraryAssetCollections;
}

@property (readonly, nonatomic) long long collectionTarget;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, nonatomic) NRDevice *device;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)assetCollections;
- (id)fetchAssetsInAssetCollection:(id)a0 options:(id)a1;
- (id)fetchAssetsWithOptions:(id)a0;
- (id)fetchKeyAssetsInAssetCollection:(id)a0 options:(id)a1;
- (id)initWithCollectionTarget:(long long)a0 device:(id)a1;
- (BOOL)isSyncingAssets;
- (unsigned long long)countOfAssetsInAssetCollection:(id)a0 options:(id)a1;
- (unsigned long long)countOfAssetsWithOptions:(id)a0;
- (unsigned long long)expectedCountOfAssets;
- (unsigned long long)expectedCountOfAssetsInAssetCollection:(id)a0;
- (BOOL)isSyncNeeded;
- (BOOL)isSyncingAssetsInAssetCollection:(id)a0;
- (id)metadataForAssetCollection:(id)a0;

@end
