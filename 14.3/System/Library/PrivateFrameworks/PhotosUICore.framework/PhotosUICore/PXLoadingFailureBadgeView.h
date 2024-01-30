@interface PXLoadingFailureBadgeView : UIImageView {
    struct { BOOL image; BOOL sizeClass; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setSizeClass:) long long _sizeClass;

+ (struct CGSize { double x0; double x1; })_imageSizeForSizeClass:(long long)a0;
+ (id)_imageForSizeClass:(long long)a0;

- (void)sizeToFit;
- (void)_setNeedsUpdate;
- (void)_updateImageIfNeeded;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateImage;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSizeClassIfNeeded;
- (void)_invalidateSizeClass;
- (void)setImage:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
