@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } intersectionRect;
    CPZoneBorder *intersectingBorder;
    BOOL forwardVector;
    BOOL backwardVector;
}

- (BOOL)forwardVector;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initSuper;
- (void)setIntersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIntersectingBorder:(id)a0;
- (long long)comparePositionLengthwise:(id)a0;
- (id)intersectingBorder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersectionRect;
- (BOOL)backwardVector;
- (void)setForwardVector:(BOOL)a0;
- (void)setBackwardVector:(BOOL)a0;

@end
