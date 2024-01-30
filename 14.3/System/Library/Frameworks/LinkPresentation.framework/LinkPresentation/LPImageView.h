@class LPImageViewStyle, LPImagePresentationProperties, UIImageView, LPImage, UIView;

@interface LPImageView : LPComponentView {
    LPImage *_image;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    long long _currentScalingMode;
    long long _platterReason;
    UIImageView *_imageView;
    UIView *_overlayView;
    UIView *_backgroundView;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutComponentView;
- (void)updateCornerRadius;
- (id)initWithImage:(id)a0 properties:(id)a1 style:(id)a2;
- (BOOL)shouldApplyBackground;
- (long long)_filter;
- (void)installDarkeningViewIfNeeded;
- (id)_createImageViewWithImage:(id)a0;
- (void)_updateScalingMode;
- (void)updateShadowPath;
- (void)ensureImageView;
- (id)_createOverlayViewWithOpacity:(double)a0;
- (struct CGSize { double x0; double x1; })imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)scalingModeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setImageViewScalingMode:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
