@class NSMapTable, NSXPCConnection, NSXPCInterface, TUCallCapabilitiesState, NSObject, NSString;
@protocol OS_dispatch_queue, TUCallCapabilitiesXPCServer;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>

@property (class, retain, nonatomic) id<TUCallCapabilitiesXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallCapabilitiesXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callCapabilitiesClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callCapabilitiesServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (retain, nonatomic) TUCallCapabilitiesState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (void)handleServerDisconnect;
- (oneway void)setRelayCallingEnabled:(BOOL)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)a0;
- (oneway void)setThumperCallingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (oneway void)setWiFiCallingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (void)performDelegateCallbackBlock:(id /* block */)a0;
- (oneway void)requestPinFromPrimaryDevice;
- (void)_updateState:(id)a0;
- (oneway void)setVoLTECallingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (void)dealloc;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)a0;
- (oneway void)setRelayCallingEnabled:(BOOL)a0 forDeviceWithID:(id)a1;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)capabilityStateUpdated:(id)a0;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)invalidate;
- (void)_retrieveState;
- (id)asynchronousServer;
- (void).cxx_destruct;
- (oneway void)setWiFiCallingRoamingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)setThumperCallingAllowed:(BOOL)a0 onSecondaryDeviceWithID:(id)a1 forSenderIdentityWithUUID:(id)a2;

@end
