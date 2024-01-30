@class LPImageViewStyle, LPImagePresentationProperties, UIImageView, LPImage, UIView;

@interface LPImageView : LPComponentView {
    LPImage *_image;
    LPImage *_filteredImage;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    long long _currentScalingMode;
    long long _platterReason;
    UIImageView *_imageView;
    UIView *_overlayView;
    UIView *_backgroundView;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)_filter;
- (void)updateCornerRadius;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 image:(id)a1 properties:(id)a2 style:(id)a3;
- (BOOL)shouldApplyBackground;
- (void)installDarkeningViewIfNeeded;
- (id)_createImageViewWithImage:(id)a0;
- (void)_updateScalingMode;
- (void)updateShadowPath;
- (void)ensureImageView;
- (id)_createOverlayViewWithOpacity:(double)a0;
- (struct CGSize { double x0; double x1; })imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)scalingModeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setImageViewScalingMode:(long long)a0;

@end
