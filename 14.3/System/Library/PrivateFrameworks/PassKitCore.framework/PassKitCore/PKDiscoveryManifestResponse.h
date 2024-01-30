@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse

@property (readonly, nonatomic) PKDiscoveryManifest *manifest;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithManifest:(id)a0;

@end
