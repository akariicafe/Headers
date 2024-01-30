@interface OADVectorArcPathElement : OADPathElement {
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mLeft;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mTop;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mRight;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mBottom;
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mStartVector;
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mEndVector;
    BOOL mClockwise;
    BOOL mConnectedToPrevious;
}

- (struct OADAdjustCoord { BOOL x0; int x1; })right;
- (struct OADAdjustCoord { BOOL x0; int x1; })bottom;
- (struct OADAdjustCoord { BOOL x0; int x1; })left;
- (struct OADAdjustCoord { BOOL x0; int x1; })top;
- (BOOL)clockwise;
- (BOOL)connectedToPrevious;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })endVector;
- (id)initWithLeft:(struct OADAdjustCoord { BOOL x0; int x1; })a0 top:(struct OADAdjustCoord { BOOL x0; int x1; })a1 right:(struct OADAdjustCoord { BOOL x0; int x1; })a2 bottom:(struct OADAdjustCoord { BOOL x0; int x1; })a3 startVector:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a4 endVector:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a5 clockwise:(BOOL)a6 connectedToPrevious:(BOOL)a7;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })startVector;

@end
