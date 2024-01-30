@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithVolume:(float)a0 endpointUID:(id)a1 outputDeviceUID:(id)a2;

@end
