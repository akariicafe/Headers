@class FIUIShapeView;

@interface FIUIGradientView : UIView {
    FIUIShapeView *_maskView;
}

+ (Class)layerClass;

- (void)setMask:(id)a0;
- (id)gradientLayer;
- (void)layoutSubviews;
- (void)setLocations:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setColors:(id)a0;

@end
