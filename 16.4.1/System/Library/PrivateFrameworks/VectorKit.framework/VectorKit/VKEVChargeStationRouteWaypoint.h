@class GEOComposedRouteEVChargingStationInfo, NSString;

@interface VKEVChargeStationRouteWaypoint : VKRouteWaypointInfo

@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargeInfo;
@property (retain, nonatomic) NSString *chargeTimeText;

- (void).cxx_destruct;
- (id)initWithWaypoint:(id)a0 legIndex:(unsigned long long)a1 routeCoordinate:(struct { double x0; double x1; double x2; })a2 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a3;

@end
