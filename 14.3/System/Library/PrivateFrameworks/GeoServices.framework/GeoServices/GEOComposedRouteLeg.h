@class NSData, NSString, NSArray, GEOComposedRoute, GEOArrivalParameters, GEOComposedWaypoint, GEOWaypointInfo, GEOComposedRouteEVChargingStationInfo;

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding, GEOComposedRoutePortion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) GEOComposedRoute *route;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pointRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stepRange;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) GEOWaypointInfo *geoOriginWaypointInfo;
@property (retain, nonatomic) GEOWaypointInfo *geoDestinationWaypointInfo;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) GEOArrivalParameters *arrivalParameters;
@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (readonly, nonatomic) double chargingDuration;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) NSData *serverLegIDForAnalytics;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) double expectedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithComposedRoute:(id)a0 origin:(id)a1 destination:(id)a2 arrivalParameters:(id)a3;
- (id)initWithComposedRoute:(id)a0 geoRouteLeg:(id)a1 origin:(id)a2 destination:(id)a3 arrivalParameters:(id)a4;
- (void)setServerLegIDForAnalytics:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
