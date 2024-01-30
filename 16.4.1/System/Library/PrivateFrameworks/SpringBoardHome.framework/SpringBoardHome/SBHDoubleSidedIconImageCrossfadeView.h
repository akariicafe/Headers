@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {
    double _scaleX;
    double _scaleY;
    double _cornerRadius;
}

+ (Class)_containerViewClass;
+ (Class)layerClass;

- (void)cleanup;
- (void)_applyCornerRadiusToIconImageView;
- (void)prepareGeometry;
- (void)_setCornerRadiusEnabled:(BOOL)a0;
- (void)_applyCornerRadiusToCrossfadeView;
- (void)_applyCornerRadius:(double)a0;
- (void)_applyCornerRadiusToViews;
- (void)layoutSubviews;
- (void)_applyCrossfadeScaleX:(double)a0 scaleY:(double)a1;
- (void)_applyCornerRadiusToBackgroundView;

@end
