@interface MRSetDiscoveryModeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int mode;
@property (readonly, nonatomic) unsigned int features;

- (unsigned long long)type;
- (id)initWithMode:(unsigned int)a0 features:(unsigned int)a1;

@end
