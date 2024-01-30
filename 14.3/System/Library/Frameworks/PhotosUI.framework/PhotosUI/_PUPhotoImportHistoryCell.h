@class UIImageView, PHAsset;

@interface _PUPhotoImportHistoryCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) int currentImageRequestToken;

- (void)_updateBorderColor;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
