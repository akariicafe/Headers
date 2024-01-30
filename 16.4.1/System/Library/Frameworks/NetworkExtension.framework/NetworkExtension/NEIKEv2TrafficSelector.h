@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject <NSCopying>

@property (retain) NWAddressEndpoint *startAddress;
@property (retain) NWAddressEndpoint *endAddress;
@property unsigned short startPort;
@property unsigned short endPort;
@property unsigned char ipProtocol;

+ (id)copyAllIPv4;
+ (id)copyAllIPv6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
