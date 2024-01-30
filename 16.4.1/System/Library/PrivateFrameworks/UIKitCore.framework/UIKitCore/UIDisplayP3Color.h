@interface UIDisplayP3Color : UIColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    _Atomic struct CGColor *_cachedColor;
}

- (double)alphaComponent;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)CGColor;
- (BOOL)_isDeepColor;
- (id)colorSpaceName;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)set;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)setFill;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

@end
