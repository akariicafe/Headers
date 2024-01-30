@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NSSManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (void)initialize;
+ (void)displayAlertWithTitle:(id)a0 body:(id)a1 icon:(id)a2;
+ (void)displayAlertFailedRemoteAirplaneMode:(BOOL)a0;
+ (void)displayAirplaneModeMirroringUserEducationAlert:(BOOL)a0;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)enableAirplaneMode:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)rebootDevice;
- (void)dealloc;
- (void)setDeviceName:(id)a0;
- (void)unsafe_invalidate;
- (id)protocol;
- (void)invalidate;
- (id)connection;
- (void)getiCloudInfo:(id /* block */)a0;
- (void)installProfile:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getProfilesInfo:(id /* block */)a0;
- (void)getAccountsInfo:(id /* block */)a0;
- (void)getAccountsInfoForAccountType:(id)a0 completionHandler:(id /* block */)a1;
- (void)getUsage:(id /* block */)a0;
- (void)getDiagnosticLogFileFromGizmo:(id)a0 withResults:(id /* block */)a1;
- (void)getDiagnosticLogsInfo:(id /* block */)a0;
- (void)retrieveAirplaneModeSettingsWithCompletionHandler:(id /* block */)a0;
- (void)setAirplaneModeSettings:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)retrieveDiagnosticLogTransferProgress:(id)a0 withProgress:(id /* block */)a1;
- (void)cancelDiagnosticLogTranfer:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteDiagnosticLogFile:(id)a0 withResult:(id /* block */)a1;
- (void)getAboutInfo:(id /* block */)a0;
- (void)obliterateGizmoPreservingeSIM:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLegalDocuments:(id /* block */)a0;
- (void)getLocalesInfo:(id /* block */)a0;
- (void)recordSoftwareUpdateSpaceFailure:(id)a0 osBeingUpdatedTo:(id)a1 completion:(id /* block */)a2;
- (void)purgeUsageBundle:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelFileTransfersInProgress;
- (BOOL)fileTransferInProgress:(id)a0;
- (void)obliterateGizmo:(id /* block */)a0;

@end
