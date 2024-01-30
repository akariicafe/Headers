@class NSString, NSArray, PHFetchResult, NSDictionary;
@protocol PXSearchTopAssetsResultChangeDelegate;

@interface PXSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PXSearchResultItem>

@property (readonly, copy, nonatomic) NSString *priorityAssetUUID;
@property (readonly, copy, nonatomic) NSArray *removedObjects;
@property (readonly, copy, nonatomic) NSArray *hiddenObjects;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) PHFetchResult *topAssetsFetchResult;
@property (weak, nonatomic) id<PXSearchTopAssetsResultChangeDelegate> delegate;
@property (readonly) NSDictionary *debugDictionary;
@property (copy, nonatomic) id /* block */ topAssetFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long itemType;

+ (id)sortedPreviewAssetsFrom:(id)a0 priorityAssetUUID:(id)a1 numberOfTopAssets:(long long)a2;
+ (id)_fetchAssetsForAssetUUIDs:(id)a0;
+ (id)sampledAssetUUIDsFrom:(id)a0 numberOfTopAssets:(long long)a1 maxNumberToSample:(long long)a2 rangeToSample:(long long)a3;
+ (id)_fetchResultForTopAssets:(id)a0;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithAssetUUIDs:(id)a0 priorityAssetUUID:(id)a1;
- (void)_filterTopAssets:(id)a0;
- (void)_notifyDelegateOfAssetChanges:(id)a0 newCuration:(BOOL)a1;
- (BOOL)_shouldRecurateForChangeDetails:(id)a0;
- (void)_curateThumbnailAssets;
- (unsigned long long)numberOfTopAssets;

@end
