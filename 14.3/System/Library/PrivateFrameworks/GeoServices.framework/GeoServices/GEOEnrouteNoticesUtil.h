@interface GEOEnrouteNoticesUtil : NSObject

+ (id)createEnrouteNoticesForComposedRoute:(id)a0 routeInitializerData:(id)a1;
+ (id)_enrouteNoticesForRoute:(id)a0 provider:(id)a1;
+ (void)_forEachGeoEnrouteNoticeOnRoute:(id)a0 handler:(id /* block */)a1;

@end
