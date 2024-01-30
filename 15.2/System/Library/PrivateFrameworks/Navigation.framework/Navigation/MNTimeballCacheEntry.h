@class NSString, NSDate, MNRouteUpdate, MNPlannedDestination;

@interface MNTimeballCacheEntry : NSObject <MNJSONOutput>

@property (retain, nonatomic) MNRouteUpdate *routeUpdate;
@property (retain, nonatomic) MNPlannedDestination *destination;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (retain, nonatomic) NSDate *nextUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonDictionary;
- (void).cxx_destruct;

@end
