@class IDSService, NSString, PSYSyncCoordinator;

@interface IMDQuickSwitchController : NSObject <PSYSyncCoordinatorDelegate, IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (retain, nonatomic) PSYSyncCoordinator *syncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)_cleanUpTemporaryFiles;
- (void)_sendDBVersionResponse:(long long)a0;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)_getZippedDBPath;
- (long long)_getCurrentDBVersion;
- (void)_deleteFileAtPath:(id)a0;
- (void)_handleIncomingDB:(id)a0;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_initiateQuickSwitch;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (void)_handleIncomingRecents:(id)a0;
- (BOOL)_sendIDSMessage:(id)a0;
- (id)_getTempDBPath;
- (void)_notifyPSYWithResult:(BOOL)a0;
- (BOOL)_supportsQuickSwitchWithPairedDevice;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)dealloc;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)_getTempRecentsPath;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_handleDBVersionResponse:(id)a0;
- (id)_getTruncatedDBPath;
- (BOOL)_truncateDBToPath:(id)a0;
- (void)_sendRecentsRequest;
- (id)_getDowngradedDBPath;
- (id)init;
- (id)_defaultPairedDevice;
- (void)_handleRecentsRequest;
- (id)_getZippedRecentsPath;
- (void)dummyMethod;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)_notifyPSYDataSent;
- (void)_handleQuickSwitchCompleted:(id)a0;

@end
