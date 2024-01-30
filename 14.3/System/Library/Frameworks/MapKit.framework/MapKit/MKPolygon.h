@class NSString, NSArray;

@interface MKPolygon : MKMultiPoint <MKGeoJSONObject, NSSecureCoding, MKOverlay> {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _centroid;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _determinedSimple;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL _isDefinitelyConvex;
@property (readonly, nonatomic, getter=_isSimple) BOOL simple;
@property (readonly) NSArray *interiorPolygons;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)polygonWithPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1 interiorPolygons:(id)a2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 interiorPolygons:(id)a2;
+ (id)polygonWithPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polygonEnclosingMapPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)_polygonWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;

@end
