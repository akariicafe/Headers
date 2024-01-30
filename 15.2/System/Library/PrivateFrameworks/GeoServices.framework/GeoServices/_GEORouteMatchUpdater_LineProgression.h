@class GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    struct PolylineCoordinate { unsigned int index; float offset; } _startRouteCoordinate;
}

- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)initWithTransitRouteMatcher:(id)a0 tripSegment:(id)a1;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (id).cxx_construct;

@end
