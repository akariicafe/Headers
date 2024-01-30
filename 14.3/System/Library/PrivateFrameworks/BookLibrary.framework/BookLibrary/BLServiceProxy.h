@class NSXPCConnection;

@interface BLServiceProxy : NSObject <BLServiceProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)flushMetricsWithReply:(id /* block */)a0;
- (id)initWithError:(out id *)a0;
- (void)shutdown;
- (void)cancelDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)requestDownloadWithMetadata:(id)a0 isRestore:(BOOL)a1 reply:(id /* block */)a2;
- (void)requestDownloadsWithManifestRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)a0 withReply:(id /* block */)a1;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* block */)a0;
- (void)fetchDownloadFromDownloadID:(id)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)a0 withReply:(id /* block */)a1;
- (void)requestDownloadsWithMetadata:(id)a0 areRestore:(BOOL)a1 reply:(id /* block */)a2;
- (void)setAutomaticDownloadEnabled:(BOOL)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)requestDownloadsWithRestoreContentRequestItems:(id)a0 reply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)a0 withReply:(id /* block */)a1;
- (void)resumeDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)downloadWithPermlink:(id)a0 title:(id)a1 reply:(id /* block */)a2;
- (void)reloadFromServerWithReply:(id /* block */)a0;
- (void)purchaseWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)purchaseWithRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)pauseDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)setValueSimulateCrashAtInstallStart:(BOOL)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateDeviceOutOfSpace:(BOOL)a0 withReply:(id /* block */)a1;
- (void)fetchDownloadListWithReply:(id /* block */)a0;
- (void)cancelAllActiveDownloadsWithReply:(id /* block */)a0;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* block */)a0;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* block */)a0;
- (void)requestDownloadWithParameters:(id)a0 reply:(id /* block */)a1;

@end
