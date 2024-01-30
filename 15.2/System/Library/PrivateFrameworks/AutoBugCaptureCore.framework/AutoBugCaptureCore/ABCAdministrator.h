@class DiagCollectionTransport, NSString, DiagnosticsTransport, AutoBugCaptureCacheDelete, DiagnosticLiaison, DiagnosticStorageManager, ABCConfigurationManager, CloudKitUploadController, NSObject, DiagnosticExtensionController, DiagnosticCaseManager, ABCPersistentStoreController;
@protocol OS_dispatch_queue;

@interface ABCAdministrator : NSObject <ABCPersistentStoreControllerDelegate> {
    NSObject<OS_dispatch_queue> *adminQueue;
    DiagCollectionTransport *diagCollectionTransport;
    DiagnosticsTransport *diagTransport;
    BOOL _autoBugCaptureAdministrativelyEnabled;
}

@property (nonatomic) int autoBugCaptureState;
@property (retain, nonatomic) DiagnosticExtensionController *diagExtensionController;
@property (retain, nonatomic) AutoBugCaptureCacheDelete *cacheDeleteHandler;
@property (retain, nonatomic) DiagnosticCaseManager *caseManager;
@property (retain, nonatomic) DiagnosticStorageManager *storageManager;
@property (retain, nonatomic) ABCPersistentStoreController *storeController;
@property (retain, nonatomic) ABCConfigurationManager *configurationManager;
@property (retain, nonatomic) DiagnosticLiaison *diagnosticLiaison;
@property (retain, nonatomic) CloudKitUploadController *ckUploadController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)persistentStoreControllerReadyForUse:(id)a0;
- (void)shutdown;
- (id)autoBugCaptureConfig;
- (void)startup;
- (void)deregisterAPNS;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0;
- (void)stopAutoBugCapture:(BOOL)a0;
- (void)scheduleDiagnosticsMaintenanceActivity;
- (void)prepareLogArchiveDirectory:(id)a0 uid:(id)a1 gid:(id)a2;
- (void)registerIDS;
- (id)getDiagnosticLiaison;
- (void)administrativelyDiableAutoBugCapture;
- (void)continueStartingAutoBugCapture;
- (void)stopMaintenanceServices;
- (void)startMaintenanceServices;
- (void)startUploadTaskScheduler;
- (id)internalStateDictionary;
- (void).cxx_destruct;
- (id)init;
- (void)administrativelyEnableAutoBugCapture;
- (void)registerAPNS;
- (void)stopUploadTaskScheduler;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0 parameters:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startEssentialServices;
- (void)deregisterIDS;
- (void)stopEssentialServices;

@end
