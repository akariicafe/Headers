@interface PKExtendedPhysicsBody : PKPhysicsBody {
    long long _associations;
    double _areaFactor;
}

@property (nonatomic) double normalizedDensity;

+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithBodies:(id)a0;
+ (id)bodyWithCircleOfRadius:(double)a0;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithEllipseInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)bodyWithPolygonFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (id)description;
- (void)associate;
- (BOOL)dissociate;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0;

@end
