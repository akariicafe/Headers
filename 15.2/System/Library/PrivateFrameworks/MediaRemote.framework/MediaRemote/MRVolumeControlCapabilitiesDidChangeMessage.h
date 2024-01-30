@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (id)initWithCapabilities:(unsigned int)a0 endpointUID:(id)a1 outputDeviceUID:(id)a2;
- (unsigned long long)type;

@end
