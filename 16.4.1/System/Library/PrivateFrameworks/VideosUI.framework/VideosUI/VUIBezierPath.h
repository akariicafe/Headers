@interface VUIBezierPath : UIBezierPath

@property (nonatomic) const struct CGPath { } *vuiCGPath;

+ (id)vui_bezierPathWithArcCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 startAngle:(double)a2 endAngle:(double)a3 clockwise:(BOOL)a4;
+ (id)vui_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1;

@end
