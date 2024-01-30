@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) long long errorCode;

- (id)initWithDeviceID:(unsigned int)a0 errorCode:(long long)a1;
- (unsigned long long)type;

@end
