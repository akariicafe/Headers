@class CALayer;

@interface FUPlaneTrackerAnnotationLayer : CALayer

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } startLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } endLocation;
@property (nonatomic) double currentProgress;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } currentLocation;
@property (weak, nonatomic) CALayer *planeImageLayer;

- (id)init;
- (void).cxx_destruct;
- (double)defaultHeadingForStartPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a1 positionPercentage:(double)a2;
- (struct CLLocationCoordinate2D { double x0; double x1; })geodesicLocationForStartPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a1 positionPercentage:(double)a2;
- (void)setPlaneImage:(id)a0;
- (void)updatePlaneStateForProgress:(double)a0;

@end
