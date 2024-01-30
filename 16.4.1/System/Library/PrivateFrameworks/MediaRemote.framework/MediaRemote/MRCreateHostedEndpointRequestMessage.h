@class NSArray;

@interface MRCreateHostedEndpointRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;

- (unsigned long long)type;
- (id)initWithOutputDeviceUIDs:(id)a0;

@end
