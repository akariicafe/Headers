@class PXPhotoKitAssetView, PHAsset, NSArray;

@interface PHAssetView : UIView

@property (retain, nonatomic) PXPhotoKitAssetView *impl;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL allowsTextSelection;
@property (nonatomic) BOOL allowsDragging;
@property (copy, nonatomic) NSArray *stringsToHighlight;

+ (id)localizedTitleForAsset:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_commonPHAssetViewInit;

@end
