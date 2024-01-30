@interface OADArcToPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mSemiaxes;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mStartAngle;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mAngleLength;
}

- (struct OADAdjustCoord { BOOL x0; int x1; })startAngle;
- (struct OADAdjustCoord { BOOL x0; int x1; })angleLength;
- (id)initWithSemiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a0 startAngle:(struct OADAdjustCoord { BOOL x0; int x1; })a1 angleLength:(struct OADAdjustCoord { BOOL x0; int x1; })a2;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })semiaxes;

@end
