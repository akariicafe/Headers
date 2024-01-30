@class NSXPCConnection;
@protocol BLProgressReceiving, BLServiceProxyConnectionMonitoring;

@interface BLServiceProxy : NSObject <BLServiceProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<BLProgressReceiving> progressReceiver;
@property (nonatomic) long long state;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id<BLServiceProxyConnectionMonitoring> connectionMonitor;

- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* block */)a0;
- (void)monitorProgressWithReply:(id /* block */)a0;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)a0 withReply:(id /* block */)a1;
- (void)reloadFromServerWithReply:(id /* block */)a0;
- (void)requestDownloadsWithManifestRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)shutdown;
- (void)requestDownloadWithMetadata:(id)a0 isRestore:(BOOL)a1 reply:(id /* block */)a2;
- (id)initWithError:(out id *)a0;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)setAutomaticDownloadEnabled:(BOOL)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)requestDownloadsWithRestoreContentRequestItems:(id)a0 reply:(id /* block */)a1;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* block */)a0;
- (void)flushMetricsWithReply:(id /* block */)a0;
- (void)fetchDownloadListWithReply:(id /* block */)a0;
- (void)requestDownloadsWithMetadata:(id)a0 areRestore:(BOOL)a1 reply:(id /* block */)a2;
- (void)purchaseWithRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)fetchDownloadFromDownloadID:(id)a0 withReply:(id /* block */)a1;
- (void)pauseDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)downloadWithPermlink:(id)a0 title:(id)a1 reply:(id /* block */)a2;
- (void)cancelAllActiveDownloadsWithReply:(id /* block */)a0;
- (void)cancelDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateDeviceOutOfSpace:(BOOL)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)a0 withReply:(id /* block */)a1;
- (void)resumeDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)a0 withReply:(id /* block */)a1;
- (void)dealloc;
- (void)requestDownloadWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)_createAndStartConnection;
- (void)setValueSimulateCrashAtInstallStart:(BOOL)a0 withReply:(id /* block */)a1;
- (void)restartDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (id)initWithProgressReceiver:(id)a0 error:(out id *)a1;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* block */)a0;

@end
