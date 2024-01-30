@class PXAssetReference;

@interface _PXAssetsSceneAnchor : NSObject

@property (readonly, nonatomic) PXAssetReference *assetReference;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } anchorOrigin;
@property (readonly, nonatomic) double distance;

- (void).cxx_destruct;
- (id)initWithAssetReference:(id)a0 anchorOrigin:(struct CGPoint { double x0; double x1; })a1 distance:(double)a2;

@end
