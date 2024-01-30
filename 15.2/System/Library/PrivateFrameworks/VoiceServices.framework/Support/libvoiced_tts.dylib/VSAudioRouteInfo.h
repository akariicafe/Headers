@class NSDictionary;

@interface VSAudioRouteInfo : NSObject

@property (readonly, nonatomic) NSDictionary *routeInfo;

- (void).cxx_destruct;
- (id)audioRouteName;
- (id)initWithRouteAttributes:(id)a0;
- (BOOL)isBluetoothRoute;
- (BOOL)isAppleProduct;

@end
