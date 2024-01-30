@class NSString;

@interface AVAPSyncOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    NSString *_deviceID;
    struct __CFString { } *_commChannelUUID;
    struct OpaqueAPSyncController { } *_syncController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
