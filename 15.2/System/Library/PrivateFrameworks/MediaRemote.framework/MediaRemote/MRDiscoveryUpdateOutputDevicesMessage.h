@class NSArray, MRAVRoutingDiscoverySessionConfiguration;

@interface MRDiscoveryUpdateOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithOutputDevices:(id)a0 configuration:(id)a1;
- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
