@class NSArray, NSString, MRAVOutputContext, MROutputContextController, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVLocalEndpoint : MRAVEndpoint <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRAVOutputContext *_outputContext;
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MROutputContextController *_outputContextController;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outputDevices;

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;

- (long long)connectionType;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)personalOutputDevices;
- (void)volumeControlCapabilitiesForOutputDevice:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)a0;
- (id)origin;
- (void)dealloc;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)designatedGroupLeader;
- (id)uniqueIdentifier;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)canModifyGroupMembership;
- (void)_outputContextDevicesDidChangeNotification:(id)a0;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;

@end
