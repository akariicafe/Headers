@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (id)init;
- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)a0;

@end
