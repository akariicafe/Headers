@class NSString, GEOMapAccess;
@protocol GEOMapTransitStation;

@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint> {
    GEOMapAccess *_map;
    struct shared_ptr<geo::MapAccessPointFeature> { struct MapAccessPointFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _accessPoint;
    id<GEOMapTransitStation> _station;
}

@property (readonly, nonatomic) unsigned long long stationID;
@property (readonly, nonatomic) double groundRadius;
@property (readonly, nonatomic) unsigned char entranceExitType;
@property (readonly, nonatomic) unsigned short accessType;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) unsigned long long transitID;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) double boundingRadius;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) struct { double x0; double x1; } *polygonPoints;
@property (readonly, nonatomic) long long polygonPointsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)distanceInMetersFrom:(struct { double x0; double x1; })a0;
- (id)findAccessPoints:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findGeometryWithCompletionHandler:(id /* block */)a0;
- (id)findStation:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findStops:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithMap:(id)a0 accessPoint:(struct shared_ptr<geo::MapAccessPointFeature> { struct MapAccessPointFeature *x0; struct __shared_weak_count *x1; })a1;

@end
