@class UIImage, UIImageView, UIView;

@interface WallpaperPhotoCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIView *_highlightOverlayView;
    UIImageView *_badgeView;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL appearanceAware;

- (void)_updateHighlight;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateImageView;
- (void)_configureView;

@end
