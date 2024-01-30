@class GEOStyleAttributes, GEOComposedWaypoint;

@interface VKRouteWaypointInfo : NSObject

@property (readonly, nonatomic) GEOComposedWaypoint *waypoint;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (nonatomic) BOOL needsRestyle;
@property (readonly, nonatomic) unsigned char type;

+ (id)newRouteWaypointForWaypoint:(id)a0 legIndex:(unsigned long long)a1;

- (void)dealloc;
- (id)initWithWaypoint:(id)a0 legIndex:(unsigned long long)a1 waypointType:(unsigned char)a2;

@end
