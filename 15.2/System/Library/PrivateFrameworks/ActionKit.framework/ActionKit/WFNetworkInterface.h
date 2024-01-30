@class NSString;

@interface WFNetworkInterface : NSObject

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) NSString *IPv4Address;
@property (readonly, nonatomic) NSString *IPv6Address;

+ (id)networkInterfaceWithInterface:(id)a0;
+ (id)activeNetworkInterface;
+ (id)defaultNetworkInterfaces;
+ (id)wifiNetworkInterfaces;

- (id)initWithInterface:(id)a0;
- (void).cxx_destruct;
- (struct __WiFiNetwork { } *)currentWiFiNetwork;
- (id)ipAddressForFamily:(unsigned char)a0;

@end
