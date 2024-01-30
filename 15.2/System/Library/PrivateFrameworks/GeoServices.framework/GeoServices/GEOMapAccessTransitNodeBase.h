@class NSString, GEOMapAccess;

@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint> {
    GEOMapAccess *_map;
    struct shared_ptr<geo::MapNodeTransit> { struct MapNodeTransit *__ptr_; struct __shared_weak_count *__cntrl_; } _node;
}

@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) unsigned long long transitID;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) double boundingRadius;
@property (readonly, nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingRect;
@property (readonly, nonatomic) struct { double x0; double x1; } *polygonPoints;
@property (readonly, nonatomic) long long polygonPointsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findGeometryWithCompletionHandler:(id /* block */)a0;
- (double)distanceInMetersFrom:(struct { double x0; double x1; })a0;
- (id)findAccessPoints:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithMap:(id)a0 node:(struct shared_ptr<geo::MapNodeTransit> { struct MapNodeTransit *x0; struct __shared_weak_count *x1; })a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
