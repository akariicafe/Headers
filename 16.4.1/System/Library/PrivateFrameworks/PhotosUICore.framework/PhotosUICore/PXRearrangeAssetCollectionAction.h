@class PHAssetCollection, PHAsset, PHFetchResult;
@protocol PXFastEnumeration;

@interface PXRearrangeAssetCollectionAction : PXPhotosAction {
    PHFetchResult *_beforeFetchResult;
    PHFetchResult *_afterFetchResult;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) id<PXFastEnumeration> movedAssets;
@property (readonly, nonatomic) PHAsset *targetAsset;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (BOOL)_canPerformUndo;
- (long long)_adjustedTargetIndexForFetchResult:(id)a0 movedAssets:(id)a1 targetAsset:(id)a2;
- (id)actionNameLocalizationKey;
- (id)initWithAssetCollection:(id)a0 movedAssets:(id)a1 targetAsset:(id)a2;
- (void)performUndo:(id /* block */)a0;

@end
