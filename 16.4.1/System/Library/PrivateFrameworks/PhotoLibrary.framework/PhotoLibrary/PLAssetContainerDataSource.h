@class NSString, PHFetchResult, NSMutableDictionary;

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource> {
    NSMutableDictionary *_assetsFetchResultByAssetCollection;
    unsigned long long _allAssetsCount;
    unsigned long long *_containerCounts;
    BOOL _cachedValuesNeedUpdate;
    unsigned long long _lastAssetCollectionIndex;
}

@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)assetAtIndexPath:(id)a0;
- (id)indexPathForGlobalIndex:(unsigned long long)a0;
- (id)assetsInAssetCollection:(id)a0;
- (unsigned long long)globalIndexForIndexPath:(id)a0;
- (void)_updateCachedValues;
- (id)assetsInAssetCollectionAtIndex:(unsigned long long)a0;
- (unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)a0 wrap:(BOOL)a1;
- (unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)a0 wrap:(BOOL)a1;
- (void)_updateCachedCount:(unsigned long long)a0 forContainerAtContainerIndex:(unsigned long long)a1;
- (unsigned long long)allAssetsCount;
- (id)assetAtGlobalIndex:(unsigned long long)a0;
- (id)assetContainerAtIndex:(unsigned long long)a0;
- (id)assetContainerForAsset:(id)a0;
- (id)assetContainerForAssetGlobalIndex:(unsigned long long)a0;
- (unsigned long long)assetCountForContainer:(id)a0;
- (unsigned long long)assetCountForContainerAtIndex:(unsigned long long)a0;
- (id)assetInAssetContainer:(id)a0 atIndex:(unsigned long long)a1;
- (id)assetWithObjectID:(id)a0;
- (id)decrementAssetIndexPath:(id)a0 insideCurrentAssetContainer:(BOOL)a1 andWrap:(BOOL)a2;
- (unsigned long long)decrementGlobalIndex:(unsigned long long)a0 insideCurrentAssetContainer:(BOOL)a1 andWrap:(BOOL)a2;
- (id)findNearestIndexPath:(id)a0 preferNext:(BOOL)a1;
- (id)firstAssetIndexPath;
- (unsigned long long)globalIndexOfAsset:(id)a0;
- (BOOL)hasAssetAtIndexPath:(id)a0;
- (id)incrementAssetIndexPath:(id)a0 insideCurrentAssetContainer:(BOOL)a1 andWrap:(BOOL)a2;
- (unsigned long long)incrementGlobalIndex:(unsigned long long)a0 insideCurrentAssetContainer:(BOOL)a1 andWrap:(BOOL)a2;
- (unsigned long long)indexOfContainer:(id)a0;
- (unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)a0;
- (id)indexPathOfAsset:(id)a0;
- (id)initWithAssetCollectionsFetchResult:(id)a0 collectionsAssetsFetchResults:(id)a1;
- (id)lastAssetIndexPath;
- (id)newAssetsFetchResults;
- (id)pl_fetchAllAssets;
- (void)viewControllerPhotoLibraryDidChange:(id)a0;

@end
