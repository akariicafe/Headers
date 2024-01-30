@class NSString, GCControllerSettings, GCController;
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
@property (readonly, nonatomic) GCControllerSettings *settingsForBundleID;
@property (readonly, nonatomic) GCControllerSettings *settingsDefault;

- (void)invalidateConnection;
- (void)setController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;
- (id)initWithIdentifier:(id)a0 initialValueForBundleID:(id)a1 defaultSettings:(id)a2;
- (void)refreshSettings;
- (void)_remoteEndpointHasSetSettingsForBundleID:(id)a0 defaultSettings:(id)a1;
- (void)newSettingsForBundleID:(id)a0 defaultSettings:(id)a1;
- (void)observeChangesForSettings:(id)a0;
- (void)stopObservingChangesForSettings:(id)a0;

@end
