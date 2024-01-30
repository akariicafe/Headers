@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject <NSCopying>

@property (readonly) unsigned long long type;
@property (retain) NWAddressEndpoint *startAddress;
@property (retain) NWAddressEndpoint *endAddress;
@property unsigned short startPort;
@property unsigned short endPort;
@property unsigned char ipProtocol;

+ (id)copyConstrainedTrafficSelectorsForRequest:(id)a0 reply:(id)a1;
+ (id)copyAllIPv6;
+ (id)copyAllIPv4;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
