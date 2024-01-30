@class NSString;

@interface MRCreateHostedEndpointResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *groupUID;

- (unsigned long long)type;
- (id)initWithGroupUID:(id)a0;

@end
