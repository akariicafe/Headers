@class PXAssetReference;
@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionReference : PXSectionedObjectReference

@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXAssetReference *keyAssetReference;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 keyAssetReference:(id)a1 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;

@end
