@interface TSDBezierNode : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } nodePoint;
@property (nonatomic) struct CGPoint { double x; double y; } inControlPoint;
@property (nonatomic) struct CGPoint { double x; double y; } outControlPoint;
@property (nonatomic) int reflectedState;
@property (readonly, nonatomic) BOOL isCollapsed;
@property (nonatomic) int type;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)bezierNodeWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)bezierNodeWithPoint:(struct CGPoint { double x0; double x1; })a0 inControlPoint:(struct CGPoint { double x0; double x1; })a1 outControlPoint:(struct CGPoint { double x0; double x1; })a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setNode:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (id)typeString;
- (void)collapse;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)reflectedStateString;
- (void)balanceControlPoints;
- (void)setInControlPoint:(struct CGPoint { double x0; double x1; })a0 reflect:(int)a1 constrain:(BOOL)a2;
- (void)setOutControlPoint:(struct CGPoint { double x0; double x1; })a0 reflect:(int)a1 constrain:(BOOL)a2;
- (void)setInControlPointFromReflection:(struct CGPoint { double x0; double x1; })a0 constrain:(BOOL)a1;
- (void)updateReflectedState;
- (void)swapControlPoints;
- (BOOL)underPoint:(struct CGPoint { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andTolerance:(double)a2 returningType:(long long *)a3;

@end
