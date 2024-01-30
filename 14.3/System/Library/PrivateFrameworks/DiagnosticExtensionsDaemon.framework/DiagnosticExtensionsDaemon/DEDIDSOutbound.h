@class DEDIDSConnection, NSString, NSObject;
@protocol OS_os_log;

@interface DEDIDSOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol, DEDSecureArchiving>

@property (weak) DEDIDSConnection *connection;
@property (retain) NSString *deviceAddress;
@property (retain) NSString *sessionID;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)sessionWithID:(id)a0 withDeviceAtAddress:(id)a1 connection:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (long long)transportType;
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
- (void)scheduleNotificationForSession:(id)a0;
- (void)cancelNotificationForSession:(id)a0;
- (void)pongSession:(id)a0;
- (void)deviceSupportsDiagnosticExtensions:(id)a0 session:(id)a1;
- (void)didAdoptFilesWithError:(id)a0 forSession:(id)a1;
- (void)uploadProgress:(unsigned long long)a0 total:(unsigned long long)a1 session:(id)a2;
- (void)didCommitSession:(id)a0;
- (void)finishedDiagnosticWithIdentifier:(id)a0 result:(id)a1 session:(id)a2;
- (void)didGetState:(long long)a0 info:(id)a1 sessionID:(id)a2;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 withIdentifiers:(id)a2 inSession:(id)a3;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 inSession:(id)a2;
- (void)didCancelSession:(id)a0;

@end
