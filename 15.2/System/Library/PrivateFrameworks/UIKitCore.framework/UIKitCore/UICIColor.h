@class CIColor, UIColor;

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (void)setFill;
- (void)set;
- (id)colorWithAlphaComponent:(double)a0;
- (id)_rgbColor;
- (id)CIColor;
- (struct CGColor { } *)CGColor;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)initWithCIColor:(id)a0;
- (unsigned long long)hash;
- (void)setStroke;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;

@end
