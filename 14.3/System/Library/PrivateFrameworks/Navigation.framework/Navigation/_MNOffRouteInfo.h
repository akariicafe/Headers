@class GEOComposedWaypoint, NSDate;

@interface _MNOffRouteInfo : NSObject {
    NSDate *_date;
    NSDate *_lastUpddate;
    GEOComposedWaypoint *_destination;
    double _originalDistanceFromDestination;
    double _distancePenalty;
    double _throttledReroutesPenalty;
}

@property (readonly, nonatomic) double penalty;

- (void).cxx_destruct;
- (id)description;
- (struct { double x0; double x1; })_coordinateFromWaypoint:(id)a0;
- (id)initWithCurrentDate:(id)a0 location:(id)a1 destination:(id)a2;
- (void)updateWithCurrentDate:(id)a0 location:(id)a1 isMostRecentReroute:(BOOL)a2 throttledReroutesCount:(unsigned long long)a3;

@end
