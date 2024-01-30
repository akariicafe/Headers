@class NSString, NSArray, GEOCommonOptions, GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, MNActiveRouteInfo, NSMutableArray, GEOComposedWaypoint, GEORoutePreloader, GEOApplicationAuditToken;

@interface MNRouteManager : NSObject <MNLocationManagerObserver> {
    NSArray *_allRoutes;
    MNActiveRouteInfo *_originalRouteInfo;
    GEORoutePreloader *_preloader;
    NSString *_tileLoaderClientIdentifier;
    GEOApplicationAuditToken *_auditToken;
}

@property (readonly, nonatomic) GEOComposedRoute *currentRoute;
@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (readonly, nonatomic) NSMutableArray *alternateRoutes;
@property (readonly, nonatomic) NSArray *allRoutes;
@property (readonly, nonatomic) NSArray *contingencyRouteSegments;
@property (readonly, nonatomic) NSArray *previewRoutes;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest;
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) NSString *requestingAppIdentifier;
@property (readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property (readonly, nonatomic) GEOComposedRoute *originalRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (id)initWithAuditToken:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)open;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)close;
- (id)init;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)_clearPreloader;
- (void)_updatePreloaderForRoute:(id)a0;
- (void)clearCurrentRoute;
- (void)updateForLocation:(id)a0;
- (void)updateForReroute:(id)a0 rerouteReason:(unsigned long long)a1 request:(id)a2 response:(id)a3;
- (void)updateWithAlternateRoutes:(id)a0;
- (void)updateWithPreviewRoutes:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)updateWithStartNavigationDetails:(id)a0;

@end
