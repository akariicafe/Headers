@class NSArray, GEODirectionsRequest, GEOETATrafficUpdateResponse, GEORouteAttributes, GEODirectionsResponse, GEOStyleAttributes;

@interface GEORouteInitializerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest;
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 etauResponse:(id)a2 styleAttributes:(id)a3;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 directionsResponse:(id)a2;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 directionsResponse:(id)a2 directionsRequest:(id)a3;

@end
