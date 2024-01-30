@class NSData, NSArray;

@interface NPTunnelTuscanyEndpoint : NWEndpoint

@property (readonly) NSData *hostsData;
@property (readonly) NSArray *hosts;

+ (unsigned int)endpointType;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsResolverCallback;
+ (id)encodeHosts:(id)a0;

- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithEncodedData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHosts:(id)a0;
- (id)description;
- (id)copyHostsWithPort:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
