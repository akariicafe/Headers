@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {
    double _scaleX;
    double _scaleY;
    double _cornerRadius;
}

+ (Class)_containerViewClass;
+ (Class)layerClass;

- (void)layoutSubviews;
- (void)_applyCornerRadiusToCrossfadeView;
- (void)_applyCrossfadeScaleX:(double)a0 scaleY:(double)a1;
- (void)_applyCornerRadius:(double)a0;
- (void)cleanup;
- (void)_applyCornerRadiusToViews;
- (void)_setCornerRadiusEnabled:(BOOL)a0;
- (void)_applyCornerRadiusToBackgroundView;
- (void)_applyCornerRadiusToIconImageView;
- (void)prepareGeometry;

@end
