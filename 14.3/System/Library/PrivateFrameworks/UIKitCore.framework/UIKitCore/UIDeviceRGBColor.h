@interface UIDeviceRGBColor : UIColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    _Atomic struct CGColor *_cachedColor;
}

- (BOOL)_isDeepColor;
- (id)colorSpaceName;
- (void)setFill;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setStroke;
- (double)alphaComponent;
- (void)set;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (struct CGColor { } *)CGColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (unsigned long long)hash;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;

@end
