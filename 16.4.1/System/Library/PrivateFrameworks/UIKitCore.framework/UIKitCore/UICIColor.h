@class CIColor, UIColor;

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)set;
- (void)setFill;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_rgbColor;
- (id)initWithCIColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)CIColor;

@end
