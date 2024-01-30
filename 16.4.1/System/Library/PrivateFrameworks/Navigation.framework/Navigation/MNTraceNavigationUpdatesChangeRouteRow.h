@class NSData;

@interface MNTraceNavigationUpdatesChangeRouteRow : MNTraceNavigationUpdatesRow

@property (retain, nonatomic) NSData *directionsResponseID;
@property (retain, nonatomic) NSData *etauResponseID;
@property (nonatomic) unsigned long long routeIndex;
@property (nonatomic) unsigned long long reason;

- (void).cxx_destruct;
- (long long)navigationUpdateType;

@end
