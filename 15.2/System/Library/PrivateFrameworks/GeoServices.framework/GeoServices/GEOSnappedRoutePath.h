@class GEOComposedRoute, NSArray, GEOComposedRouteSection, GEOMapRequest;

@interface GEOSnappedRoutePath : NSObject {
    GEOComposedRoute *_route;
    GEOMapRequest *_edgeSearchRequest;
    struct __CFSet { } *_observers;
    struct unique_ptr<geo::RouteMapMatchingSection, std::default_delete<geo::RouteMapMatchingSection>> { struct __compressed_pair<geo::RouteMapMatchingSection *, std::default_delete<geo::RouteMapMatchingSection>> { struct RouteMapMatchingSection *__value_; } __ptr_; } _mapMatchingSection;
    BOOL _hasCompletedMapMatching;
    unsigned int _unsnappedPointCount;
    struct GeoCodecsVectorTilePoint3D { float x0; float x1; float x2; } *_unsnappedPoints;
}

@property (readonly) unsigned int routeStartIndex;
@property (readonly) unsigned int routeEndIndex;
@property (readonly) BOOL isMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) NSArray *edges;
@property (readonly, weak) GEOComposedRouteSection *section;
@property (readonly) const struct RouteMapMatchingSection { void /* function */ **x0; } *mapMatchingSection;

- (void)registerObserver:(id)a0;
- (float)_calculateEdgeLengthFrom:(const void *)a0 to:(const void *)a1 startCoord:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a2 endCoord:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a3;
- (void)_debugPrintEdge:(id)a0;
- (id)description;
- (BOOL)hasObserver:(id)a0;
- (id)initWithRoute:(id)a0 section:(id)a1 routeStartIndex:(unsigned int)a2 routeEndIndex:(unsigned int)a3;
- (void)matchWithDecoder:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)unregisterObserver:(id)a0;
- (void)dealloc;
- (id).cxx_construct;

@end
