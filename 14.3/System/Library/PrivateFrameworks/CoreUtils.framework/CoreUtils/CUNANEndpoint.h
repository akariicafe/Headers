@class WiFiAwareDiscoveryResult, NSString, WiFiMACAddress, NSDictionary;

@interface CUNANEndpoint : NSObject

@property (retain, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (nonatomic) unsigned char instanceID;
@property (retain, nonatomic) WiFiMACAddress *macAddress;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (nonatomic) int rssi;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSDictionary *textInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEndpointID:(const char *)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (unsigned int)updateWithDiscoveryResult:(id)a0;

@end
