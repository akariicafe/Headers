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

- (void)processRestoredContainerWithIdentifier:(id)a0 ofType:(long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)a0 completion:(id /* block */)a1;
- (void)removeSafeHarborForIdentifier:(id)a0 ofType:(long long)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)fetchInfoForContainerizedAppWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)revertIdentifier:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)lookupUninstalledWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)getTestModeEnabled:(BOOL *)a0 outError:(id *)a1;
- (void)uninstallIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)delegateMessageDeliveryCompleteWithError:(id)a0;
- (BOOL)endTestMode:(id *)a0;
- (id)_waitForPendingDelegateMessages;
- (void)clearUninstalledIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)enumerateAppDictionary:(id)a0 error:(id)a1;
- (void)listSafeHarborsOfType:(long long)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)registerSafeHarborAtPath:(id)a0 forIdentifier:(id)a1 ofType:(long long)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (BOOL)setTestFlags:(unsigned long long)a0 withError:(id *)a1;
- (void)updateiTunesMetadataForLSWithIdentifier:(id)a0 options:(id)a1 plistData:(id)a2 completion:(id /* block */)a3;
- (void)fetchDiskUsageForIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)checkCapabilities:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (int)pidForTesting;
- (void)waitForSystemAppMigratorToComplete:(id /* block */)a0;
- (void)lookupSystemAppStateWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateObject;
- (void)updatePlaceholderMetadataForApp:(id)a0 installType:(unsigned long long)a1 failureReason:(unsigned long long)a2 underlyingError:(id)a3 failureSource:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)setSystemAppMigrationComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reportProgress:(id)a0;
- (id)init;
- (void)systemAppMigratorHasCompleted:(id /* block */)a0;
- (void)installURL:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)getAppMetadataForApp:(id)a0 completion:(id /* block */)a1;
- (void)snapshotWKAppInCompanionAppID:(id)a0 toURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)setTestMode:(id *)a0;
- (void)waitForSystemAppMigratorWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)fetchInfoForFrameworkAtURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)enumerateInstalledAppsWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)clearTestFlags:(unsigned long long)a0 withError:(id *)a1;
- (void)updateSinfForLSWithIdentifier:(id)a0 withOptions:(id)a1 sinfData:(id)a2 completion:(id /* block */)a3;
- (void)dieForTesting;
- (void)updateSystemAppStateForIdentifier:(id)a0 appState:(int)a1 completion:(id /* block */)a2;

@end
