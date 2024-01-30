@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

- (float)volume;
- (id)outputDevices;
- (unsigned int)volumeControlCapabilities;
- (void).cxx_destruct;
- (void)removeAllOutputDevices;
- (void)removeOutputDevices:(id)a0;
- (id)uniqueIdentifier;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)updateOutputDevices:(id)a0;

@end
