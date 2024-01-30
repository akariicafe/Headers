@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int inputMode;

- (unsigned long long)type;
- (id)initWithInputMode:(unsigned int)a0;

@end
