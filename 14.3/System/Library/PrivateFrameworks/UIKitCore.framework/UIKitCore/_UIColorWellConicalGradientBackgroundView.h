@class CAGradientLayer;

@interface _UIColorWellConicalGradientBackgroundView : UIView {
    CAGradientLayer *_alphaLayer;
}

+ (Class)layerClass;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
