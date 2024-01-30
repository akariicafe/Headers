@class GEOComposedRouteStep, GEOPBTransitStop, GEOPBTransitStation;

@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater {
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStation *_alightStation;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateAlightStation;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_postAlightStep;
    GEOComposedRouteStep *_postAlightWalkingStep;
}

- (void).cxx_destruct;
- (id)initWithTransitRouteMatcher:(id)a0 alightStep:(id)a1;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (BOOL)_isLocationNearAlightNode:(id)a0;
- (id).cxx_construct;

@end
