@class AVCustomDeviceRoute;

@interface AVCustomRoutingEvent : NSObject {
    AVCustomDeviceRoute *_route;
}

@property (nonatomic) long long reason;
@property (nonatomic) AVCustomDeviceRoute *route;
@property (nonatomic) BOOL succeeded;

- (id)init;
- (void)dealloc;
- (id)description;

@end
