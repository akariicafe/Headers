@interface FxShape : NSObject {
    struct FxShapePriv { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; } *_priv;
}

+ (id)shapeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)infiniteShape;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent;
- (void)dealloc;
- (BOOL)isInfinite;
- (id)initWithInfiniteBounds;
- (id)intersectWithShape:(id)a0;

@end
