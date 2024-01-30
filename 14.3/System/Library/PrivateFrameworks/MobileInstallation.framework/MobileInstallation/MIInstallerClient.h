@class NSObject, NSError, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _delegatesCompleteCondMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _delegatesCompleteCond;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ appDictionaryEnumBlock;
@property (nonatomic) BOOL delegatesComplete;
@property (retain, nonatomic) NSError *delegatesCompleteError;

+ (id)installerWithProgressBlock:(id /* block */)a0;
+ (id)installerWithAppDictionaryEnumerator:(id /* block */)a0;

- (BOOL)setTestMode:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateObject;
- (void)dieForTesting;
- (void)dealloc;
- (void)delegateMessageDeliveryCompleteWithError:(id)a0;
- (void)installURL:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)uninstallIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)lookupUninstalledWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)clearUninstalledIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)getAppMetadataForApp:(id)a0 completion:(id /* block */)a1;
- (void)lookupSystemAppStateWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)updateSystemAppStateForIdentifier:(id)a0 appState:(int)a1 completion:(id /* block */)a2;
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)a0 completion:(id /* block */)a1;
- (void)enumerateInstalledAppsWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)fetchDiskUsageForIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)processRestoredContainerWithIdentifier:(id)a0 ofType:(long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)waitForSystemAppMigratorToComplete:(id /* block */)a0;
- (void)registerSafeHarborAtPath:(id)a0 forIdentifier:(id)a1 ofType:(long long)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (void)removeSafeHarborForIdentifier:(id)a0 ofType:(long long)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)listSafeHarborsOfType:(long long)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)checkCapabilities:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)fetchInfoForFrameworkAtURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)fetchInfoForContainerizedAppWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)setSystemAppMigrationComplete:(id /* block */)a0;
- (void)updateSinfForLSWithIdentifier:(id)a0 withOptions:(id)a1 sinfData:(id)a2 completion:(id /* block */)a3;
- (void)updateiTunesMetadataForLSWithIdentifier:(id)a0 options:(id)a1 plistData:(id)a2 completion:(id /* block */)a3;
- (void)updatePlaceholderMetadataForApp:(id)a0 installType:(unsigned long long)a1 failureReason:(unsigned long long)a2 underlyingError:(id)a3 failureSource:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)snapshotWKAppInCompanionAppID:(id)a0 toURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)systemAppMigratorHasCompleted:(id /* block */)a0;
- (void)enumerateAppDictionary:(id)a0 error:(id)a1;
- (id)_waitForPendingDelegateMessages;
- (void)waitForSystemAppMigratorWithCompletion:(id /* block */)a0;
- (int)pidForTesting;
- (BOOL)endTestMode:(id *)a0;
- (BOOL)getTestModeEnabled:(BOOL *)a0 outError:(id *)a1;
- (void)reportProgress:(id)a0;

@end
