@class FIUIShapeView;

@interface FIUIGradientView : UIView {
    FIUIShapeView *_maskView;
}

+ (Class)layerClass;

- (void)setMask:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void)setLocations:(id)a0;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setColors:(id)a0;

@end
