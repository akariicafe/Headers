@class DEDConfiguration, DEDDiagnosticCollector, NSOperationQueue, DEDController, NSObject, NSString;
@protocol OS_os_log, OS_dispatch_queue;

@interface DEDDaemon : NSObject <DEDWorkerProtocol>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDConfiguration *config;
@property (retain) NSOperationQueue *backgroundOpQueue;
@property (retain) NSOperationQueue *userInitiatedOpQueue;
@property BOOL embeddedInApp;
@property (retain) NSObject<OS_dispatch_queue> *diskAccessQueue;
@property (retain) DEDDiagnosticCollector *_diagnosticCollector;
@property (retain) DEDController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)transportType;
- (id)_controller;
- (void)start;
- (void)cancelSession:(id)a0;
- (void)pingSession:(id)a0;
- (void)listAvailableExtensionsForSession:(id)a0;
- (void)getSessionStateWithSession:(id)a0;
- (void)getSessionStatusWithSession:(id)a0;
- (void)syncSessionStatusWithSession:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)finallyStartDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (void)commitSession:(id)a0;
- (void)adoptFiles:(id)a0 forSession:(id)a1;
- (void)scheduleNotificationForSession:(id)a0;
- (void)cancelNotificationForSession:(id)a0;
- (void)teardownDeferredDiagnosticsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)attachmentHandler;
- (void)configureForEmbedded:(BOOL)a0;
- (void)_startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2 runSetup:(BOOL)a3;
- (id)diagnosticCollector;
- (void)setupDeferredDiagnosticsWithExtensionInfo:(id)a0;
- (BOOL)observesOperations;
- (void)_logOperations;
- (void)_syncSessionStatusWithSessionID:(id)a0 withIdentifiers:(BOOL)a1;
- (void)_syncSessionStatusWithSession:(id)a0 withIdentifiers:(BOOL)a1;
- (void)_streamOperationStatus;
- (id)_blockOnFakeSysidagnoseWithIdentifer:(id)a0 withBugSession:(id)a1;

@end
