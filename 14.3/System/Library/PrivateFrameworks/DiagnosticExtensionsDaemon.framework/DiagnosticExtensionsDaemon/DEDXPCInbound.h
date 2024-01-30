@class DEDController, NSString, NSObject;
@protocol OS_os_log;

@interface DEDXPCInbound : NSObject <DEDXPCProtocol>

@property (retain) NSObject<OS_os_log> *log;
@property (weak) DEDController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ping;
- (void).cxx_destruct;
- (void)pong;
- (id)initWithDelegate:(id)a0;
- (void)cancelSession:(id)a0;
- (void)pingSession:(id)a0;
- (void)listAvailableExtensionsForSession:(id)a0;
- (void)getSessionStateWithSession:(id)a0;
- (void)getSessionStatusWithSession:(id)a0;
- (void)syncSessionStatusWithSession:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (void)commitSession:(id)a0;
- (void)adoptFiles:(id)a0 forSession:(id)a1;
- (void)pongSession:(id)a0;
- (void)deviceSupportsDiagnosticExtensions:(id)a0 session:(id)a1;
- (void)didAdoptFilesWithError:(id)a0 forSession:(id)a1;
- (void)uploadProgress:(unsigned long long)a0 total:(long long)a1 session:(id)a2;
- (void)didCommitSession:(id)a0;
- (void)finishedDiagnosticWithIdentifier:(id)a0 result:(id)a1 session:(id)a2;
- (void)didGetState:(long long)a0 info:(id)a1 sessionID:(id)a2;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 withIdentifiers:(id)a2 inSession:(id)a3;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 inSession:(id)a2;
- (void)didCancelSession:(id)a0;
- (void)discoverAllAvailableDevices;
- (void)stopDeviceDiscovery;
- (void)startPairSetupForDevice:(id)a0;
- (void)promptPINForDevice:(id)a0;
- (void)tryPIN:(id)a0 forDevice:(id)a1;
- (void)successPINForDevice:(id)a0;
- (void)startBugSessionWithIdentifier:(id)a0 configuration:(id)a1 caller:(id)a2 target:(id)a3;
- (void)hasActiveSession:(id)a0;
- (void)gotDeviceUpdate:(id)a0;
- (void)didDiscoverDevices:(id)a0;
- (void)didStartBugSessionWithInfo:(id)a0;
- (void)sessionWithIdentifier:(id)a0 isActive:(BOOL)a1;
- (void)notifySession:(id)a0;
- (void)cancelNotifySession:(id)a0;

@end
