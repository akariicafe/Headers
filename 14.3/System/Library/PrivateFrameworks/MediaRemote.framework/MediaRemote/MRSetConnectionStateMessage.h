@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;

- (unsigned long long)encryptionType;
- (unsigned long long)type;
- (id)initWithConnectionState:(unsigned int)a0;

@end
