@class NSArray, AVOutputDevice, AVOutputDeviceGroup, NSString;

@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl> {
    struct OpaqueAPSyncController { } *_syncController;
    struct __CFString { } *_groupID;
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

- (long long)volumeControlType;
- (void)setVolume:(float)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_groupMembersChangedForGroupWithID:(struct __CFString { } *)a0;
- (id)_outputDeviceForID:(struct __CFString { } *)a0;
- (id)_outputDevicesFromProperty:(struct __CFString { } *)a0 withQualifier:(struct __CFString { } *)a1;
- (void)_volumeChangedForGroupWithID:(struct __CFString { } *)a0;
- (void)_volumeControlTypeChangedForGroupWithID:(struct __CFString { } *)a0;
- (void)addOutputDevice:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithRemoteGroupID:(struct __CFString { } *)a0 syncController:(struct OpaqueAPSyncController { } *)a1;
- (void)removeOutputDevice:(id)a0 withOptions:(id)a1 completionhandler:(id /* block */)a2;

@end
