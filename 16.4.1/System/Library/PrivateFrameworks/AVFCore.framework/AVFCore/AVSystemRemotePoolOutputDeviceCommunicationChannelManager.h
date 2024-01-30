@class AVOutputDevice, NSString, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager> {
    NSString *_deviceID;
    AVOutputContext *_outputContext;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    struct __CFDictionary { } *_communicationChannelsForUUIDs;
}

@property (weak) AVOutputDevice *parentOutputDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSystemRemotePool;
+ (id)sharedSystemRemotePoolImpl;

- (id)_initializeIfNeededAndGetSystemRemotePool;
- (void)openCommunicationChannelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDeviceID:(id)a0;
- (void)dealloc;
- (void)_didReceiveData:(struct __CFData { } *)a0 fromDeviceWithID:(struct __CFString { } *)a1 fromChannelWithUUID:(struct __CFString { } *)a2;
- (void)_didCloseCommChannelWithUUID:(struct __CFString { } *)a0 forDeviceWithID:(struct __CFString { } *)a1;
- (void).cxx_destruct;

@end
