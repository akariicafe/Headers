@class GEOComposedRoute, NSArray, GEORouteMatch, NSHashTable;

@interface VKNavContext : NSObject {
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate2D *, std::__1::allocator<GEOLocationCoordinate2D> > { struct *__value_; } __end_cap_; } _pointsToFrame;
    NSHashTable *_observers;
    unsigned long long _navCameraHeadingOverride;
    struct vector<AdditionalRouteInfo, std::__1::allocator<AdditionalRouteInfo> > { struct AdditionalRouteInfo *__begin_; struct AdditionalRouteInfo *__end_; struct __compressed_pair<AdditionalRouteInfo *, std::__1::allocator<AdditionalRouteInfo> > { struct AdditionalRouteInfo *__value_; } __end_cap_; } _additionalRoutesToFrame;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (nonatomic) unsigned long long currentStepIndex;
@property (readonly, nonatomic) unsigned long long groupedManeuverCount;
@property (copy, nonatomic) NSArray *groupedManeuverCounts;
@property (nonatomic) unsigned long long navigationCameraHeadingOverride;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)clearAdditionalRoutesToFrame;
- (void)_notifyObserversStateChanged;
- (void)updateWithNewRoute:(id)a0 currentStepIndex:(unsigned long long)a1;
- (unsigned long long)groupedManeuverCount;
- (void)clearPointsToFrame;
- (void)addPointToFrame:(struct { double x0; double x1; })a0;
- (void)enumeratePointsToFrameUsingBlock:(id /* block */)a0;
- (void)addRouteToFrame:(id)a0 divergenceCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 convergenceCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(id /* block */)a0;
- (id).cxx_construct;

@end
