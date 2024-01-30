@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)volumeControlCapabilities;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeAllOutputDevices;
- (id)initWithCoder:(id)a0;
- (void)updateOutputDevices:(id)a0;
- (id)outputDevices;
- (void)removeOutputDevices:(id)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (float)volume;
- (void).cxx_destruct;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (id)uniqueIdentifier;

@end
