@class NSString, SFSession, DEDSharingConnection, NSObject;
@protocol OS_os_log;

@interface DEDSharingOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol>

@property (retain) NSString *identifier;
@property (retain) SFSession *session;
@property (weak) DEDSharingConnection *connection;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitSession:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (long long)transportType;
- (void)loadTextDataForExtensions:(id)a0 localization:(id)a1 sessionID:(id)a2;
- (void)scheduleNotificationForSession:(id)a0;
- (void)cancelSession:(id)a0;
- (void)addSessionData:(id)a0 withFilename:(id)a1 forSession:(id)a2;
- (void)unscheduleNotificationForSession:(id)a0;
- (void)getSessionStatusWithSession:(id)a0;
- (void)adoptFiles:(id)a0 forSession:(id)a1;
- (void)getSessionStateWithSession:(id)a0;
- (void)listAvailableExtensionsForSession:(id)a0;
- (void)pingSession:(id)a0;
- (void)syncSessionStatusWithSession:(id)a0;
- (void).cxx_destruct;
- (void)uploadProgress:(unsigned long long)a0 total:(unsigned long long)a1 sessionID:(id)a2;
- (id)basePayloadForCommand:(id)a0;
- (void)compressionProgress:(unsigned long long)a0 total:(unsigned long long)a1 sessionID:(id)a2;
- (void)deviceSupportsDiagnosticExtensions:(id)a0 session:(id)a1;
- (void)didAdoptFilesWithError:(id)a0 forSession:(id)a1;
- (void)didCancelSession:(id)a0;
- (void)didCommitSession:(id)a0;
- (void)didGetState:(long long)a0 info:(id)a1 sessionID:(id)a2;
- (void)didLoadTextDataForExtensions:(id)a0 localization:(id)a1 session:(id)a2;
- (void)finishedDiagnosticWithIdentifier:(id)a0 result:(id)a1 session:(id)a2;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 inSession:(id)a2;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 withIdentifiers:(id)a2 inSession:(id)a3;
- (id)initWithID:(id)a0 withSFSession:(id)a1 connection:(id)a2;
- (void)pongSession:(id)a0;

@end
