@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) long long errorCode;

- (unsigned long long)type;
- (id)initWithDeviceID:(unsigned int)a0 errorCode:(long long)a1;

@end
