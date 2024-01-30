@interface OADQuadBezierToPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mControlPoint;
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mToPoint;
}

- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })toPoint;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })controlPoint;
- (id)initWithControlPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a0 toPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a1;

@end
