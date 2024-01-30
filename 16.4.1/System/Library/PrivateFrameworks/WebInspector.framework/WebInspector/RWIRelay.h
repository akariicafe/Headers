@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_xpc_object, RWIRelayDelegate;

@interface RWIRelay : NSObject <_RWIRelayConnectionToApplicationDelegate, _RWIRelayClientConnectionDelegate, _RWIClientToRelayMessageReceiver> {
    NSObject<OS_xpc_object> *_xpcApplicationListenConnection;
    NSMutableArray *_pendingClientConnections;
    NSMutableDictionary *_pendingProxyApplicationConnections;
    NSMutableArray *_automaticInspectionDebuggers;
    NSMutableDictionary *_automaticInspectionSessions;
}

@property (readonly, nonatomic) NSMutableDictionary *applicationConnections;
@property (readonly, nonatomic) NSMutableDictionary *clientConnections;
@property (readonly, nonatomic) NSMutableDictionary *driverInterfaces;
@property (nonatomic) id<RWIRelayDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (void)_developerPreferencesChanged;
- (void)_reportCurrentStateToAllClients;
- (void)_addPendingClientConnection:(id)a0;
- (id)_allDriverDetails;
- (void)_disconnectApplicationConnect:(id)a0;
- (void)xpcConnection:(id)a0 unhandledMessage:(id)a1;
- (void)_driverUpdated:(id)a0;
- (id)_allApplicationDetails;
- (void)_applicationConnected:(id)a0;
- (void)_applicationDisconnected:(id)a0;
- (void)_applicationUpdated:(id)a0;
- (void)_driverConnected:(id)a0;
- (void)_driverDisconnected:(id)a0;
- (void)_dumpApplication:(id)a0 withOrdinal:(unsigned long long)a1;
- (void)_dumpClientConnection:(id)a0 withOrdinal:(unsigned long long)a1;
- (void)_finalizePendingClientConnection:(id)a0 withIdentifier:(id)a1;
- (void)_handleApplicationListenConnectionEvent:(id)a0;
- (void)_handleDumpStateNotification;
- (void)_proxyApplicationConnected:(id)a0;
- (void)_proxyApplicationResponse:(id)a0 userInfo:(id)a1;
- (void)_receivedAutomaticInspectionCandidate:(id)a0 connection:(id)a1;
- (void)_receivedDataMessage:(id)a0 connection:(id)a1;
- (void)_receivedListingMessage:(id)a0 connection:(id)a1;
- (void)_receivedProxyApplicationSetupResponseMessage:(id)a0 connection:(id)a1;
- (void)_reportCurrentStateToClient:(id)a0;
- (void)_rpc_debuggerDidWake:(id)a0;
- (void)_rpc_debuggerWillSleep:(id)a0;
- (void)_rpc_forwardAutomaticInspectionConfiguration:(id)a0;
- (void)_rpc_forwardAutomaticInspectionRejection:(id)a0;
- (void)_rpc_forwardAutomationSessionRequest:(id)a0;
- (void)_rpc_forwardDidClose:(id)a0;
- (void)_rpc_forwardDriverStateChangeRequest:(id)a0;
- (void)_rpc_forwardGetListing:(id)a0;
- (void)_rpc_forwardIndicateWebView:(id)a0;
- (void)_rpc_forwardSocketData:(id)a0;
- (void)_rpc_forwardSocketSetup:(id)a0;
- (void)_rpc_forwardWakeUpDebuggables:(id)a0;
- (void)_rpc_getConnectedApplications:(id)a0;
- (void)_rpc_getConnectedDrivers:(id)a0;
- (void)_rpc_reportDriverConnected:(id)a0;
- (void)_rpc_reportDriverDisconnected:(id)a0;
- (void)_rpc_reportDriverUpdated:(id)a0;
- (void)_rpc_reportIdentifier:(id)a0;
- (void)_rpc_requestApplicationLaunch:(id)a0;
- (void)_setGlobalNotifyStateWithAutomaticInspectionEnabled:(BOOL)a0;
- (void)addPendingClientConnection:(id)a0;
- (void)clientConnectionDidClose:(id)a0;
- (void)shutdownIfDisabled;
- (void)updateApplication:(id)a0;
- (void)xpcConnection:(id)a0 receivedMessage:(id)a1 userInfo:(id)a2;
- (void)xpcConnectionFailed:(id)a0;

@end
