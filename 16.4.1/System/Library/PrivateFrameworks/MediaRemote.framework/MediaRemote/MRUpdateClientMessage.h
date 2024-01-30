@class MRClient;

@interface MRUpdateClientMessage : MRProtocolMessage

@property (readonly, nonatomic) MRClient *client;

- (id)initWithClient:(id)a0;
- (unsigned long long)type;

@end
