@class UIView;

@interface PBFPosterGallerySmartAlbumConfigurationViewHostCell : UICollectionViewCell

@property (retain, nonatomic) UIView *hostedView;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateContent:(id /* block */)a0;

@end
