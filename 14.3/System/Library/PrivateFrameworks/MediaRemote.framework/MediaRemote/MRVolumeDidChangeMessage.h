@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (id)initWithVolume:(float)a0 endpointUID:(id)a1 outputDeviceUID:(id)a2;
- (unsigned long long)type;

@end
