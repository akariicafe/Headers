@class UIColor;

@interface HKSolidFillStyle : HKFillStyle

@property (copy, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)renderPath:(struct CGPath { } *)a0 context:(struct CGContext { } *)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(double)a3;

@end
