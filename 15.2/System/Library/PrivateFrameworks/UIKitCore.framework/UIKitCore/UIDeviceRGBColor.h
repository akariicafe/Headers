@interface UIDeviceRGBColor : UIColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    _Atomic struct CGColor *_cachedColor;
}

- (void)setFill;
- (BOOL)_isDeepColor;
- (void)set;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (struct CGColor { } *)CGColor;
- (id)description;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorSpaceName;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (void)setStroke;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;

@end
