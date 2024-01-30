@class IDSService, NSString, PSYSyncCoordinator;

@interface IMDQuickSwitchController : NSObject <PSYSyncCoordinatorDelegate, IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (retain, nonatomic) PSYSyncCoordinator *syncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)_defaultPairedDevice;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)dealloc;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)_cleanUpTemporaryFiles;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)_initiateQuickSwitch;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (id)_getTempDBPath;
- (void)_deleteFileAtPath:(id)a0;
- (id)_getTempRecentsPath;
- (id)_getZippedDBPath;
- (id)_getZippedRecentsPath;
- (id)_getTruncatedDBPath;
- (id)_getDowngradedDBPath;
- (BOOL)_sendIDSMessage:(id)a0;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (void)_notifyPSYWithResult:(BOOL)a0;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (long long)_getCurrentDBVersion;
- (BOOL)_truncateDBToPath:(id)a0;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (void)_notifyPSYDataSent;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_handleDBVersionResponse:(id)a0;
- (void)_handleRecentsRequest;
- (void)_handleQuickSwitchCompleted:(id)a0;
- (void)_handleIncomingDB:(id)a0;
- (void)_handleIncomingRecents:(id)a0;
- (BOOL)_supportsQuickSwitchWithPairedDevice;
- (void)dummyMethod;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_sendDBVersionResponse:(long long)a0;
- (void)_sendRecentsRequest;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;

@end
