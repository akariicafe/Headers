@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int inputMode;

- (id)initWithInputMode:(unsigned int)a0;
- (unsigned long long)type;

@end
