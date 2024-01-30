@interface WFReverseCircleOverlay : MKCircle

@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingRect;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 boundingMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a2;

- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingMapRect;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })innerCircleBoundingMapRect;

@end
