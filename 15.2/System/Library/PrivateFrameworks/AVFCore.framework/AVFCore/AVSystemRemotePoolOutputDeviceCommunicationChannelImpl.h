@class NSString, AVOutputDeviceCommunicationChannel, AVOutputContext;

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    NSString *_deviceID;
    struct __CFString { } *_commChannelUUID;
    AVOutputContext *_outputContext;
}

@property (weak) AVOutputDeviceCommunicationChannel *parentChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (void)close;
- (id)initWithDeviceID:(id)a0 channelUUID:(struct __CFString { } *)a1 outputContext:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
