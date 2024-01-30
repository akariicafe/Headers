@class NSString, GEOComposedWaypoint;

@interface MNTraceCommuteDestinationRow : NSObject

@property (nonatomic) unsigned long long destinationID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GEOComposedWaypoint *waypoint;

- (void).cxx_destruct;

@end
