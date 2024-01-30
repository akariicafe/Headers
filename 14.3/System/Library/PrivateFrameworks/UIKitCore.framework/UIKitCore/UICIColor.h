@class CIColor, UIColor;

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setStroke;
- (void)set;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (struct CGColor { } *)CGColor;
- (id)CIColor;
- (void).cxx_destruct;
- (id)_rgbColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCIColor:(id)a0;

@end
