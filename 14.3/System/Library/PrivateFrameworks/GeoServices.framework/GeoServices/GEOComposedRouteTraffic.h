@class NSArray;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *trafficIncidents;
@property (readonly, nonatomic) NSArray *trafficIncidentOffsets;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) NSArray *routeTrafficColors;
@property (readonly, nonatomic) NSArray *routeIncidents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRoute:(id)a0 initializerData:(id)a1;
- (id)description;
- (id)initWithRoute:(id)a0 etaRoute:(id)a1;
- (id)_trafficColorInfosFromTrafficBuilder:(id)a0 route:(id)a1;
- (void)_buildIncidentsForRoute:(id)a0 etaRoute:(id)a1 initializerData:(id)a2;
- (id)_incidentsForOldRoute:(id)a0 etaRoute:(id)a1;
- (id)_incidentsForRoute:(id)a0;
- (id)_incidentsForOldRoute:(id)a0 geoIncidentsFromResponse:(id)a1;
- (id)_incidentsForRoute:(id)a0 etaRoute:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
