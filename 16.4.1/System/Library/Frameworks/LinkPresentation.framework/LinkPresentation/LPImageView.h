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
- (id)initWithHost:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_filter;
- (void).cxx_destruct;
- (void)updateCornerRadius;
- (void)ensureImageView;
- (id)_createImageViewWithImage:(id)a0;
- (id)_createOverlayViewWithOpacity:(double)a0;
- (void)_setImageViewScalingMode:(long long)a0;
- (void)_updateScalingMode;
- (struct CGSize { double x0; double x1; })imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0 image:(id)a1 properties:(id)a2 style:(id)a3;
- (void)installDarkeningViewIfNeeded;
- (void)layoutComponentView;
- (long long)scalingModeForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldApplyBackground;
- (void)updateBorder;
- (void)updateShadowPath;

@end
