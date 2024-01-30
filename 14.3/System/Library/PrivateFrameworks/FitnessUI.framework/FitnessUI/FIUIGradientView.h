@class FIUIShapeView;

@interface FIUIGradientView : UIView {
    FIUIShapeView *_maskView;
}

+ (Class)layerClass;

- (void)setLocations:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setColors:(id)a0;
- (void)layoutSubviews;
- (void)setMask:(id)a0;
- (id)gradientLayer;

@end
