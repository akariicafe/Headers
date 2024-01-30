@class GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    struct PolylineCoordinate { unsigned int index; float offset; } _startRouteCoordinate;
}

- (id).cxx_construct;
- (unsigned long long)priority;
- (void).cxx_destruct;
- (id)initWithTransitRouteMatcher:(id)a0 tripSegment:(id)a1;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
