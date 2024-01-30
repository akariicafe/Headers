@class AVOutputDevice, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVAPSyncOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager> {
    NSString *_deviceID;
    struct OpaqueAPSyncController { } *_syncController;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    struct __CFDictionary { } *_communicationChannelsForUUIDs;
}

@property (weak) AVOutputDevice *parentOutputDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didCloseCommChannelWithUUID:(struct __CFString { } *)a0 forDeviceWithID:(struct __CFString { } *)a1;
- (void)_saveCommChannel:(id)a0 forUUID:(struct __CFString { } *)a1;
- (id)initWithDeviceID:(id)a0 syncController:(struct OpaqueAPSyncController { } *)a1;
- (void)_didReceiveData:(struct __CFData { } *)a0 fromDeviceWithID:(struct __CFString { } *)a1 fromChannelWithUUID:(struct __CFString { } *)a2;
- (void).cxx_destruct;
- (void)openCommunicationChannelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
