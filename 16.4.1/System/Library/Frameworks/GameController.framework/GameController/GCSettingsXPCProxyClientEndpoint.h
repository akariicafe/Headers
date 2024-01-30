@class NSString, GCSProfile, GCController;
@protocol NSSecureCoding, NSCopying, NSObject, GCSettingsXPCProxyRemoteServerEndpointInterface;

@interface GCSettingsXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCSettingsXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ changedHandler;
@property (readonly, nonatomic) GCSProfile *settingsProfile;

- (void)invalidateConnection;
- (void)setController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)_remoteEndpointHasSetProfile:(id)a0;
- (id)initWithIdentifier:(id)a0 initialValueForProfile:(id)a1;
- (void)newProfile:(id)a0;
- (void)refreshProfile;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;

@end
