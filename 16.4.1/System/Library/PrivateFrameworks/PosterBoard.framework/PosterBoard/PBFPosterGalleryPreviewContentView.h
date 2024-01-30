@class UIImage, UIImageView;

@interface PBFPosterGalleryPreviewContentView : UIView {
    UIImageView *_posterPreviewImageView;
    UIImageView *_frontHiddenImageView;
    UIImageView *_backHiddenImageView;
}

@property (retain, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previewImageFrame;
@property (nonatomic, getter=isSmartAlbum) BOOL smartAlbum;
@property (nonatomic, getter=isHero) BOOL hero;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL preferredCornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_createHiddenViewsIfNeeded;
- (void)_updateHiddenImages;

@end
