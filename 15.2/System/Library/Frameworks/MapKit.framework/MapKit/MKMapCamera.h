@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {
    MKMapView *_mapView;
    BOOL _pitchAdjustsAltitude;
    BOOL _needsStateUpdate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) double precisePitch;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) double centerCoordinateDistance;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (nonatomic) double altitude;

+ (id)_cameraLookingAtMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 forViewSize:(struct CGSize { double x0; double x1; })a1;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 fromEyeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 eyeAltitude:(double)a2;
+ (id)camera;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 fromDistance:(double)a1 pitch:(double)a2 heading:(double)a3;
+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a0 aspectRatio:(float)a1;

- (id)_mapView;
- (void)encodeWithCoder:(id)a0;
- (void)_setMapView:(id)a0;
- (BOOL)_validate;
- (void)_mapViewStateChanged;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_enclosingGEOMapRectForAspectRatio:(float)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateState;

@end
