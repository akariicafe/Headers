@interface PXLoadingFailureBadgeView : UIImageView {
    struct { BOOL image; BOOL sizeClass; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setSizeClass:) long long _sizeClass;

+ (struct CGSize { double x0; double x1; })_imageSizeForSizeClass:(long long)a0;
+ (id)_imageForSizeClass:(long long)a0;

- (void)_updateSizeClassIfNeeded;
- (void)layoutSubviews;
- (void)_invalidateImage;
- (void)_updateImageIfNeeded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_invalidateSizeClass;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (void)sizeToFit;

@end
