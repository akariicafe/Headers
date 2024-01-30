@class GEOComposedWaypoint;

@interface MNTraceNavigationUpdatesDepartWaypointRow : MNTraceNavigationUpdatesRow

@property (retain, nonatomic) GEOComposedWaypoint *waypoint;
@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) unsigned long long reason;

- (void).cxx_destruct;
- (long long)navigationUpdateType;

@end
