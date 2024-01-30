@class UIColor, CAGradientLayer, CAShapeLayer;

@interface _SUICCheckGlyphLayer : CALayer {
    CAShapeLayer *_checkPackageLayer;
    CAGradientLayer *_maskLayer;
    BOOL _covered;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _uncoveredTransform;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _coveredTransform;
}

@property (copy, nonatomic) UIColor *primaryColor;
@property (nonatomic, getter=isRevealed) BOOL revealed;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (double)setCovered:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_createMask;
- (double)_pointScaleToMatchBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)_updateCovered:(BOOL)a0 completion:(id /* block */)a1;
- (void)setPrimaryColor:(id)a0 animated:(BOOL)a1;
- (void)setPrimaryColor:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;

@end
