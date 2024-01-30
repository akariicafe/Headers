@class NSString;
@protocol GEOMapTransitStop;

@interface GEOMapAccessTransitLink : GEOMapAccessLine <GEOMapTransitLink> {
    struct shared_ptr<geo::MapEdgeTransit> { struct MapEdgeTransit *__ptr_; struct __shared_weak_count *__cntrl_; } _transitEdge;
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> { struct *__value_; } __end_cap_; } _coords;
}

@property (readonly, nonatomic) unsigned long long transitLineID;
@property (readonly, nonatomic) NSString *internalLineName;
@property (readonly, nonatomic) unsigned int minimumTravelTime;
@property (readonly, nonatomic) id<GEOMapTransitStop> stopFrom;
@property (readonly, nonatomic) id<GEOMapTransitStop> stopTo;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) double length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)distanceInMetersFrom:(struct { double x0; double x1; })a0 outClosestCoordinateOnLine:(struct { double x0; double x1; } *)a1;
- (id)initWithMap:(id)a0 transitEdge:(struct shared_ptr<geo::MapEdgeTransit> { struct MapEdgeTransit *x0; struct __shared_weak_count *x1; })a1;

@end
