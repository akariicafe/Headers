@class GEOComposedTransitTripRouteStep, GEOPBTransitStation, GEOPBTransitStop, GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater {
    GEOPBTransitStop *_transitStop;
    GEOPBTransitStation *_transitStation;
    struct { double latitude; double longitude; } _entranceCoordinate;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateApproaching;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateAtStation;
    GEOComposedRouteStep *_enterStationStep;
    GEOComposedRouteStep *_boardVehicleStep;
    GEOComposedTransitTripRouteStep *_rideStep;
    BOOL _hasEnteredStation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_hasLocationEnteredStation:(id)a0 routeMatch:(id)a1;
- (BOOL)_hasLocationExitedStation:(id)a0;
- (BOOL)_isLocationNearAccessPoint:(id)a0;
- (BOOL)_isLocationNearEndOfWalkingSegment:(id)a0;
- (BOOL)_isLocationNearTransitNode:(id)a0;
- (id)initWithTransitRouteMatcher:(id)a0 boardVehicleStep:(id)a1;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
