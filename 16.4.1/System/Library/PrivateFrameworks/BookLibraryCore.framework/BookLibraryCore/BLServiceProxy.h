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

- (void)setValueSimulateDeviceOutOfSpace:(BOOL)a0 withReply:(id /* block */)a1;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)setAutomaticDownloadEnabled:(BOOL)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (id)initWithProgressReceiver:(id)a0 error:(out id *)a1;
- (void)monitorProgressWithReply:(id /* block */)a0;
- (void)racGUIDForStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)migrationInfosWithStates:(id)a0 withReply:(id /* block */)a1;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* block */)a0;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* block */)a0;
- (void)pauseDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)resumeDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)requestDownloadWithMetadata:(id)a0 isRestore:(BOOL)a1 reply:(id /* block */)a2;
- (void)cancelDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)migrationInfosWithStoreIDs:(id)a0 withReply:(id /* block */)a1;
- (void)migrationInfoWithStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)setRacGUID:(id)a0 forStoreID:(long long)a1 withReply:(id /* block */)a2;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* block */)a0;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)a0 withReply:(id /* block */)a1;
- (void)shutdown;
- (void)_createAndStartConnection;
- (void)reloadFromServerWithReply:(id /* block */)a0;
- (void)flushMetricsWithReply:(id /* block */)a0;
- (void)prepareForRemoveAppWithReply:(id /* block */)a0;
- (void)fetchDownloadFromDownloadID:(id)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)a0 withReply:(id /* block */)a1;
- (void)downloadWithPermlink:(id)a0 title:(id)a1 reply:(id /* block */)a2;
- (void)requestDownloadsWithMetadata:(id)a0 areRestore:(BOOL)a1 reply:(id /* block */)a2;
- (void)setMigrationState:(long long)a0 forStoreIDs:(id)a1 withReply:(id /* block */)a2;
- (void)dealloc;
- (void)setValueSimulateCrashAtInstallStart:(BOOL)a0 withReply:(id /* block */)a1;
- (void)restartDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (id)_synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)cancelAllActiveDownloadsWithReply:(id /* block */)a0;
- (id)initWithError:(out id *)a0;
- (void)requestDownloadsWithRestoreContentRequestItems:(id)a0 reply:(id /* block */)a1;
- (void)removeAllMigrationInfosExcludingStates:(id)a0 withReply:(id /* block */)a1;
- (void)purchaseWithRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)removeRacGUIDForStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)a0 withReply:(id /* block */)a1;
- (void)removeMigrationInfoForStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)requestDownloadsWithManifestRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestDownloadWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)fetchDownloadListWithReply:(id /* block */)a0;

@end
