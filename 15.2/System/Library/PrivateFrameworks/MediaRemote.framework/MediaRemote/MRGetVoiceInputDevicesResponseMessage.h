@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly, nonatomic) long long errorCode;

- (id)initWithDeviceIDs:(id)a0 errorCode:(long long)a1;
- (unsigned long long)type;

@end
