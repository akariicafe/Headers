@class NSArray, MRAVRoutingDiscoverySessionConfiguration;

@interface MRDiscoveryUpdateEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithEndpoints:(id)a0 configuration:(id)a1;
- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
