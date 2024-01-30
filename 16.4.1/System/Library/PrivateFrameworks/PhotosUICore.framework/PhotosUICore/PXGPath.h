@class UIColor;

@interface PXGPath : NSObject <NSCopying>

@property (readonly, copy, nonatomic) UIColor *strokeColor;
@property (readonly, nonatomic) double lineWidth;
@property (readonly, copy, nonatomic) UIColor *fillColor;
@property (readonly, nonatomic) const struct CGPath { } *CGPath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) int drawingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 CGPath:(struct CGPath { } *)a1 strokeColor:(id)a2 lineWidth:(double)a3 fillColor:(id)a4 drawingMode:(int)a5;

@end
