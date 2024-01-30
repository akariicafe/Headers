@class NSArray;

@interface MRUpdateSyncedEndpointsMessage : MRProtocolMessage {
    NSArray *_endpoints;
}

@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) unsigned int features;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithEndpoints:(id)a0 endpointFeature:(unsigned int)a1;

@end
