@class NSArray, AVOutputDevice, AVOutputDeviceGroup, NSString, AVOutputContext;

@interface AVOutputContextLocalOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl> {
    AVOutputContext *_outputContext;
}

@property (weak) AVOutputDeviceGroup *parentOutputDeviceGroup;
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice;
@property (readonly) NSArray *outputDevices;
@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVolume:(float)a0;
- (id)initWithOutputContext:(id)a0;
- (long long)volumeControlType;
- (void)addOutputDevice:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeOutputDevice:(id)a0 withOptions:(id)a1 completionhandler:(id /* block */)a2;
- (void)_contextOutputDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_contextVolumeDidChange;
- (void)_contextCanSetVolumeDidChange;
- (void)dealloc;

@end
