@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {
    double _scaleX;
    double _scaleY;
    double _cornerRadius;
}

+ (Class)layerClass;
+ (Class)_containerViewClass;

- (void)cleanup;
- (void)_setCornerRadiusEnabled:(BOOL)a0;
- (void)prepareGeometry;
- (BOOL)reparentsSourceView;
- (void)layoutSubviews;
- (void)_applyCrossfadeScaleX:(double)a0 scaleY:(double)a1;
- (void)_applyCornerRadius:(double)a0;
- (void)_applyCornerRadiusToViews;
- (void)_applyCornerRadiusToIconImageView;
- (void)_applyCornerRadiusToCrossfadeView;

@end
