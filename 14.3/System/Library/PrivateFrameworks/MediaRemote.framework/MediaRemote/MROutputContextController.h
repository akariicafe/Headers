@class NSString, NSMutableDictionary, MRAVOutputContext, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (readonly, nonatomic) NSString *localDeviceUID;

+ (id)sharedOutputContextController;

- (float)volume;
- (id)outputDevices;
- (unsigned int)volumeControlCapabilities;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_handleOutputDeviceAddedNotification:(id)a0;
- (void)dealloc;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (id)setVolume:(float)a0 outputDeviceUID:(id)a1;
- (float)volumeForOutputDeviceUID:(id)a0;
- (id)uniqueIdentifier;
- (id)description;
- (void)_handleOutputDeviceRemovedNotification:(id)a0;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)a0;

@end
