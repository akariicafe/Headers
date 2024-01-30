@class NSArray, MRAVConcreteOutputContext, MROutputContextController, NSString, MROrigin;

@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) MRAVConcreteOutputContext *outputContext;
@property (retain, nonatomic) MROutputContextController *outputContextController;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic, getter=isRealized) BOOL realized;

- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)outputContextDataSourceReloaded:(id)a0;
- (void)outputContextDataSourceDidAddOutputDevice:(id)a0;
- (id)uniqueIdentifier;
- (BOOL)canModifyGroupMembership;
- (void)outputContextDataSourceDidRemoveOutputDevice:(id)a0;
- (id)designatedGroupLeader;
- (void)volumeControlCapabilitiesForOutputDevice:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (id)personalOutputDevices;
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)a0;
- (BOOL)isProxyGroupPlayer;
- (void)outputContextDataSourceDidChangeOutputDevice:(id)a0;
- (void).cxx_destruct;
- (long long)connectionType;
- (id)initWithCoder:(id)a0;
- (BOOL)isConnected;
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)a0;
- (void)dealloc;

@end
