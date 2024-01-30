@class GEOComposedRouteEVChargingStationInfo, NSString;

@interface VKEVChargeStationRouteWaypoint : VKRouteWaypointInfo

@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargeInfo;
@property (retain, nonatomic) NSString *chargeTimeText;

- (void)dealloc;
- (id)initWithWaypoint:(id)a0 legIndex:(unsigned long long)a1;

@end
