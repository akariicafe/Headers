@class IndoorProtocolProxy, CLGpsPosition;

@interface ServiceState : NSObject

@property (retain, nonatomic) CLGpsPosition *lastLocation;
@property (nonatomic) BOOL pausedLocalization;
@property (nonatomic) BOOL updateLocation;
@property (retain, nonatomic) IndoorProtocolProxy *delegateProxy;

- (void).cxx_destruct;

@end
