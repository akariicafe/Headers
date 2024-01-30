@interface MRUnregisterGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned long long controllerID;

- (id)initWithControllerID:(unsigned long long)a0;
- (unsigned long long)type;

@end
