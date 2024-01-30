@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;

- (unsigned long long)type;
- (unsigned long long)encryptionType;
- (id)initWithConnectionState:(unsigned int)a0;

@end
