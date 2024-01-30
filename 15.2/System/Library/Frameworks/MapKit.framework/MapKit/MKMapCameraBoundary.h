@class VKCameraRegionRestriction;

@interface MKMapCameraBoundary : NSObject <NSSecureCoding, NSCopying> {
    VKCameraRegionRestriction *_vkRestriction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isEmpty) BOOL _empty;
@property (readonly, nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;

- (BOOL)isValidMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_clampedCoordinateForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToMapCameraBoundary:(id)a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)_vkRegionRestriction;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_clampedMapRectForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_clampedCoordinateRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isValidCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;

@end
