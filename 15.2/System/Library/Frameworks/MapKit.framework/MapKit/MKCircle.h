@class NSString;

@interface MKCircle : MKShape <MKOverlay>

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
+ (id)circleWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;

- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)_initWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;

@end
