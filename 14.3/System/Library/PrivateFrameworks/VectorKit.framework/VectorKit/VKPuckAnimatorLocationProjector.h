@class GEORouteMatch;

@interface VKPuckAnimatorLocationProjector : NSObject

@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEORouteMatch *projectedRouteMatch;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } projectedPosition;
@property (readonly, nonatomic) struct { double x0; double x1; } projectedLocation;
@property (readonly, nonatomic) double projectedCourse;
@property (readonly, nonatomic) BOOL projectedLocationOnRoute;

- (id)detailedDescription;
- (id)init;
- (void)reset;
- (void)_updateCourseAndPositionFromRouteMatch;
- (void)dealloc;
- (id).cxx_construct;
- (void)projectFromLocation:(id)a0 routeMatch:(id)a1 speedMultiplier:(double)a2;

@end
