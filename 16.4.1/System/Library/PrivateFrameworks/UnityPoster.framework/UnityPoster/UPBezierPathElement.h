@interface UPBezierPathElement : NSObject

@property (nonatomic) int type;
@property (nonatomic) unsigned long long pointCount;
@property (nonatomic) struct CGPoint { double x0; double x1; } *points;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } endPoint;

- (void)dealloc;
- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })a0 pathElement:(const struct CGPathElement { int x0; struct CGPoint *x1; } *)a1;

@end
