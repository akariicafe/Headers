@interface VKFootprint : NSObject {
    double _maxDistance;
    double _minDistance;
    struct Matrix<double, 3, 1> { double _e[3]; } _cornerGroundPoints[12];
}

@property (readonly, nonatomic) struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } boundingRect;
@property (readonly, nonatomic) struct VKFootprintConvexHull_struct { int edgeCount; struct Matrix<double, 3, 1> { double _e[3]; } edgeOrigin[6]; struct Matrix<double, 3, 1> { double _e[3]; } edgeNormal[6]; } convexHull;
@property (readonly, nonatomic) double minDepth;
@property (readonly, nonatomic) double maxDepth;
@property (readonly, nonatomic) double centerDepth;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } furthestGroundPoint;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } nearestGroundPoint;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3]; } *cornerGroundPoints;
@property (readonly, nonatomic) int cornerGroundPointsCount;

- (void)computeFromCamera:(id)a0;
- (id /* block */)annotationRectTest;
- (id).cxx_construct;
- (id /* block */)annotationCoordinateTest;
- (BOOL)rejectsRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; } *)a0;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })_expandedBoundingRect;
- (BOOL)containsGroundPoint:(const struct Matrix<double, 3, 1> { double x0[3]; } *)a0;

@end
