@class NSString;

@interface WFNetworkInterface : NSObject

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) NSString *SSID;
@property (readonly, nonatomic) NSString *BSSID;
@property (readonly, nonatomic) NSString *IPv4Address;
@property (readonly, nonatomic) NSString *IPv6Address;

+ (id)networkInterfaceWithInterface:(id)a0;
+ (id)activeNetworkInterface;
+ (id)defaultNetworkInterfaces;
+ (id)wifiNetworkInterfaces;

- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (struct __WiFiNetwork { } *)currentWiFiNetwork;
- (id)ipAddressForFamily:(unsigned char)a0;

@end
