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

- (void)configureForEmbedded:(BOOL)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (void)_syncSessionStatusWithSessionID:(id)a0 withIdentifiers:(BOOL)a1;
- (void)commitSession:(id)a0;
- (id)diagnosticCollector;
- (void)_startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2 runSetup:(BOOL)a3;
- (void)listAvailableExtensionsForSession:(id)a0;
- (void)terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (id)attachmentHandler;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)setupDeferredDiagnosticsWithExtensionInfo:(id)a0;
- (void)start;
- (void)_streamOperationStatus;
- (void)teardownDeferredDiagnosticsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)_controller;
- (void).cxx_destruct;
- (void)scheduleNotificationForSession:(id)a0;
- (id)init;
- (BOOL)observesOperations;
- (void)cancelNotificationForSession:(id)a0;
- (void)adoptFiles:(id)a0 forSession:(id)a1;
- (void)_logOperations;
- (void)finallyStartDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)getSessionStatusWithSession:(id)a0;
- (void)_syncSessionStatusWithSession:(id)a0 withIdentifiers:(BOOL)a1;
- (void)pingSession:(id)a0;
- (void)getSessionStateWithSession:(id)a0;
- (void)cancelSession:(id)a0;
- (void)syncSessionStatusWithSession:(id)a0;
- (long long)transportType;

@end
