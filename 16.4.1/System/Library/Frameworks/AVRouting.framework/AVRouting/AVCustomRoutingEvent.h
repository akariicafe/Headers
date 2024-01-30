@class AVCustomDeviceRoute;

@interface AVCustomRoutingEvent : NSObject

@property (nonatomic) long long reason;
@property (retain, nonatomic) AVCustomDeviceRoute *route;
@property (nonatomic) BOOL succeeded;

- (id)description;
- (void).cxx_destruct;

@end
