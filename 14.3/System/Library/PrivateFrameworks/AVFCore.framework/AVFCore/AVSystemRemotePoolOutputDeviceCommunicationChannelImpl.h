@class NSString, AVOutputContext;

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    NSString *_deviceID;
    struct __CFString { } *_commChannelUUID;
    AVOutputContext *_outputContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
