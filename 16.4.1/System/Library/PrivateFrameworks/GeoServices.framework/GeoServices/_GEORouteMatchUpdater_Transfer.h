@class GEOComposedRouteStep, GEOPBTransitStop, GEOPBTransitStation;

@interface _GEORouteMatchUpdater_Transfer : _GEORouteMatchUpdater {
    GEOPBTransitStation *_alightStation;
    GEOPBTransitStation *_boardStation;
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStop *_boardStop;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_transferStep;
    GEOComposedRouteStep *_boardStep;
}

- (void).cxx_destruct;
- (BOOL)_isLocation:(id)a0 nearStation:(id)a1;
- (BOOL)_isLocation:(id)a0 nearStop:(id)a1;
- (id)initWithTransitRouteMatcher:(id)a0 alightStep:(id)a1 transferStep:(id)a2 boardStep:(id)a3;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
