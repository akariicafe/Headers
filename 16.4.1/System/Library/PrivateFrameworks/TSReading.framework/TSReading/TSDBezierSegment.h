@interface TSDBezierSegment : NSObject {
    struct CGPoint { double x; double y; } mA;
    struct CGPoint { double x; double y; } mOut;
    struct CGPoint { double x; double y; } mIn;
    struct CGPoint { double x; double y; } mB;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } fromPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } outPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } inPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } toPoint;
@property (readonly, nonatomic) BOOL bogusSegment;

+ (id)segmentFromPoint:(struct CGPoint { double x0; double x1; })a0 outPoint:(struct CGPoint { double x0; double x1; })a1 inPoint:(struct CGPoint { double x0; double x1; })a2 toPoint:(struct CGPoint { double x0; double x1; })a3;

- (id)description;
- (struct CGPoint { double x0; double x1; })closestPointToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initFromPoint:(struct CGPoint { double x0; double x1; })a0 outPoint:(struct CGPoint { double x0; double x1; })a1 inPoint:(struct CGPoint { double x0; double x1; })a2 toPoint:(struct CGPoint { double x0; double x1; })a3;
- (double)parametricValueForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointAtParametricValue:(double)a0;
- (void)splitAtParametricValue:(double)a0 left:(id *)a1 right:(id *)a2;

@end
