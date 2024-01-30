@class NSString;

@interface MKPolyline : MKMultiPoint <MKGeoJSONObject, MKOverlay>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 elevations:(const double *)a1 count:(unsigned long long)a2;
+ (id)polylineWithPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;

- (void)_calculateBounds;
- (id)_initWithGeoJSONObject:(id)a0 error:(id *)a1;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)_initWithGeoJSONPoints:(id)a0 error:(id *)a1;

@end
