@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject

@property (weak, nonatomic) SBButtonConsumerClient *client;
@property (nonatomic) long long buttonKind;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
