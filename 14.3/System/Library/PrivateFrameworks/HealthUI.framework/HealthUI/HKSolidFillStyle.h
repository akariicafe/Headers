@class UIColor;

@interface HKSolidFillStyle : HKFillStyle

@property (copy, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_renderInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
