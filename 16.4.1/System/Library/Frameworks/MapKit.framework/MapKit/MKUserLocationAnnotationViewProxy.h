@class NSString, MKAnnotationView, GEORouteMatch;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation>

@property (weak, nonatomic) MKAnnotationView *annotationView;
@property (nonatomic) double presentationCourse;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } collisionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { double x0; double x1; } presentationCoordinate;
@property (nonatomic) BOOL tracking;
@property (nonatomic, getter=isAnimatingAccuracy) BOOL animatingAccuracy;
@property (nonatomic) double presentationAccuracy;
@property (readonly, nonatomic) double minimumAccuracy;
@property (readonly, nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } annotationTrackingEdgeInsets;
@property (retain, nonatomic) GEORouteMatch *routeMatch;

- (void)setAnimatingToCoordinate:(BOOL)a0;
- (void).cxx_destruct;

@end
