@class NSArray;

@interface MRRemoveEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpointUIDs;

- (id)initWithEndpointUIDs:(id)a0;
- (unsigned long long)type;

@end
