@interface TSDWrapPolygon : NSObject <NSCopying> {
    void *mPolygon;
    BOOL mIntersectsSelf;
    BOOL mComputedSelfIntersection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
    BOOL mComputedBounds;
}

- (id)initWithPath:(id)a0;
- (void)setPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)bezierPath;
- (void *)polygon;
- (BOOL)intersectsSelf;
- (void)setIntersectsSelf:(BOOL)a0;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)p_countSegments;
- (struct CGPoint { double x0; double x1; })intersectionPointBetween:(struct CGPoint { double x0; double x1; })a0 and:(struct CGPoint { double x0; double x1; })a1;
- (void)p_computeIntersectionState;
- (void)p_freePolygon;
- (void)p_setPolygon:(struct { int x0; int *x1; struct *x2; } *)a0;

@end
