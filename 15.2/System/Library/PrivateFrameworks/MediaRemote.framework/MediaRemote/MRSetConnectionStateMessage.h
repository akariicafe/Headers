@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;

- (id)initWithConnectionState:(unsigned int)a0;
- (unsigned long long)encryptionType;
- (unsigned long long)type;

@end
