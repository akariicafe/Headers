@class MKPointOfInterestFilter;

@interface MKLocalPointsOfInterestRequest : NSObject <NSCopying>

@property (readonly, nonatomic, getter=_createdFromRegion) BOOL createdFromRegion;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;

- (BOOL)_isValidCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (double)_deriveRadiusFromCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_clampedCoordinateRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;

@end
