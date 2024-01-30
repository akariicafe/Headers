@class NSNumber, NSString, NSObject;
@protocol OS_os_log, DEDXPCInboundDelegate;

@interface DEDXPCInbound : NSObject <DEDXPCProtocol>

@property (retain) NSObject<OS_os_log> *log;
@property (weak) id<DEDXPCInboundDelegate> delegate;
@property (retain) NSNumber *senderPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)xpc_hasCollected:(id)a0 isCollecting:(id)a1 inSession:(id)a2;
- (void)xpc_stopDeviceDiscovery;
- (void)xpc_adoptFiles:(id)a0 forSession:(id)a1;
- (void)xpc_listClientXPCConnections;
- (id)initWithDelegate:(id)a0 senderPid:(id)a1;
- (void)xpc_listClientXPCConnectionsReply:(id)a0;
- (void)xpc_ping;
- (void)xpc_pongSession:(id)a0;
- (void)xpc_cancelNotifySession:(id)a0;
- (void)xpc_didCommitSession:(id)a0;
- (void)xpc_cancelSession:(id)a0;
- (void)xpc_startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (void)xpc_didGetState:(long long)a0 info:(id)a1 sessionID:(id)a2;
- (void)xpc_deviceSupportsDiagnosticExtensions:(id)a0 session:(id)a1;
- (void)xpc_commitSession:(id)a0;
- (void).cxx_destruct;
- (void)xpc_notifySession:(id)a0;
- (void)xpc_pingSession:(id)a0;
- (void)xpc_listAvailableExtensionsForSession:(id)a0;
- (void)xpc_promptPINForDevice:(id)a0;
- (void)xpc_getSessionStatusWithSession:(id)a0;
- (void)xpc_syncSessionStatusWithSession:(id)a0;
- (void)xpc_gotDeviceUpdate:(id)a0;
- (void)xpc_didDiscoverDevices:(id)a0;
- (void)xpc_didAdoptFilesWithError:(id)a0 forSession:(id)a1;
- (void)xpc_tryPIN:(id)a0 forDevice:(id)a1;
- (void)xpc_hasActiveSessionReply:(id)a0 isActive:(BOOL)a1;
- (void)xpc_didCancelSession:(id)a0;
- (void)xpc_startBugSessionWithIdentifier:(id)a0 configuration:(id)a1 caller:(id)a2 target:(id)a3;
- (void)xpc_pong;
- (void)xpc_successPINForDevice:(id)a0;
- (void)xpc_hasCollected:(id)a0 isCollecting:(id)a1 withIdentifiers:(id)a2 inSession:(id)a3;
- (void)xpc_startPairSetupForDevice:(id)a0;
- (void)xpc_finishedDiagnosticWithIdentifier:(id)a0 result:(id)a1 session:(id)a2;
- (void)xpc_hasActiveSession:(id)a0;
- (void)xpc_discoverAllAvailableDevices;
- (void)xpc_uploadProgress:(unsigned long long)a0 total:(long long)a1 session:(id)a2;
- (void)xpc_terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (void)xpc_didStartBugSessionWithInfo:(id)a0;
- (void)xpc_getSessionStateWithSession:(id)a0;
- (void)xpc_startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;

@end
