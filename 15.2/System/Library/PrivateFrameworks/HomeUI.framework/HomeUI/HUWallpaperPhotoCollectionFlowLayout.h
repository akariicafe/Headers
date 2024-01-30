@interface HUWallpaperPhotoCollectionFlowLayout : UICollectionViewFlowLayout

@property (readonly, nonatomic) long long assetCollectionSubtype;

- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAssetCollectionSubtype:(long long)a0;

@end
