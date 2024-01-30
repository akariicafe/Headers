@class PHAsset, PHFetchResult, NSArray, PHPhotoLibrary, PHAssetCollection, PXContentSyndicationPhotoKitAssetGroup;
@protocol PXFastEnumeration;

@interface PXAddAssetsToAssetCollectionAction : PXAssetsAction

@property (readonly, nonatomic) PHPhotoLibrary *targetPhotoLibrary;
@property (readonly, nonatomic) PHFetchResult *existingAssets;
@property (readonly, nonatomic) PXContentSyndicationPhotoKitAssetGroup *assetGroup;
@property (retain, nonatomic) id<PXFastEnumeration> addedAssets;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (nonatomic) BOOL shouldSortAssetsByCreationDate;
@property (retain, nonatomic) PHAsset *dropTargetAsset;
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0 assetCollection:(id)a1;
- (void)_addAssets:(id)a0 completionHandler:(id /* block */)a1;
- (id)actionNameLocalizationKey;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
