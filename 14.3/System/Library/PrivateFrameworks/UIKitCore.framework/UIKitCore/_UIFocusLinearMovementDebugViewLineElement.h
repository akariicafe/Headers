@interface _UIFocusLinearMovementDebugViewLineElement : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } cp1;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } cp2;

+ (id)elementWithCGPathElement:(const struct CGPathElement { int x0; struct CGPoint *x1; } *)a0;

- (id)initWithType:(int)a0 point:(struct CGPoint { double x0; double x1; })a1 cp1:(struct CGPoint { double x0; double x1; })a2 cp2:(struct CGPoint { double x0; double x1; })a3;

@end
