@class NSArray;

@interface MRUpdateEndpointsMessage : MRProtocolMessage {
    NSArray *_endpoints;
}

@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) unsigned int features;

- (id)initWithEndpoints:(id)a0 endpointFeature:(unsigned int)a1;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
