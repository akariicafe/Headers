@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

- (float)volume;
- (unsigned int)volumeControlCapabilities;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (id)outputDevices;
- (id)uniqueIdentifier;
- (void)removeAllOutputDevices;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)removeOutputDevices:(id)a0;
- (void)updateOutputDevices:(id)a0;

@end
