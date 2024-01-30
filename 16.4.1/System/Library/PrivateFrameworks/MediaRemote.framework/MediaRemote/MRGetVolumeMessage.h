@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (id)initWithOutputDeviceUID:(id)a0;
- (unsigned long long)type;
- (id)init;

@end
