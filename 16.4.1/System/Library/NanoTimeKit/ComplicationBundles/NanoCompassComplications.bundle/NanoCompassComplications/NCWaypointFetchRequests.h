@interface NCWaypointFetchRequests : NSObject

+ (id)fetchRequestForEnabledWaypoints;
+ (id)fetchRequestForAllWaypoints;
+ (id)fetchRequestForWaypointContainingKeyword:(id)a0;
+ (id)fetchRequestForWaypointWithUUID:(id)a0;
+ (id)fetchRequestForWaypointsWithoutAltitude;

@end
