@class NSArray, AVOutputDevice;
@protocol AVOutputDeviceGroupImpl;

@interface AVOutputDeviceGroup : NSObject {
    id<AVOutputDeviceGroupImpl> _impl;
}

@property (readonly) BOOL receivesLongFormAudioFromLocalDevice;
@property (readonly) NSArray *outputDevices;
@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) float volume;
@property (readonly) long long volumeControlType;

+ (void)initialize;
+ (id)outputDeviceGroupWithRemoteGroupID:(struct __CFString { } *)a0 syncController:(struct OpaqueAPSyncController { } *)a1;
+ (id)sharedAudioPresentationOutputGroup;

- (void)setVolume:(float)a0;
- (id)impl;
- (void)outputDeviceGroupImplDidChangeVolume:(id)a0;
- (void)dealloc;
- (void)addOutputDevice:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)removeOutputDevice:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithOutputDeviceGroupImpl:(id)a0;
- (void)outputDeviceGroupImplDidChangeVolumeControlType:(id)a0;
- (void)outputDeviceGroupImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1;

@end
