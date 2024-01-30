@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject

@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (copy, nonatomic) NSData *routeID;
@property (nonatomic) unsigned long long selectedRouteIndex;

- (void).cxx_destruct;

@end
