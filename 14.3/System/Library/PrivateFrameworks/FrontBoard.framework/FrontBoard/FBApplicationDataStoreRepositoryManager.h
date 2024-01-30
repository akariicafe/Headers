@class NSString, LSApplicationWorkspace, NSURL, FBSqliteApplicationDataStoreRepository, NSObject;
@protocol OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate> {
    NSURL *_dataStoreURL;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}

@property (retain, nonatomic) FBSqliteApplicationDataStoreRepository *dataStore;
@property (retain, nonatomic) LSApplicationWorkspace *lsApplicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)removeStoreAtURL:(id)a0 error:(out id *)a1;
- (id)init;
- (void)_performAfterDeferredWork:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_safeObjectForKey:(id)a0 forApplication:(id)a1 ofType:(Class)a2;
- (BOOL)migrateFromPlistStoreAtURL:(id)a0 toSqliteStoreAtURL:(id)a1 error:(id *)a2;
- (void)migrateApplicationStorePathIfNecessary;
- (void)objectChangedForKeys:(id)a0 application:(id)a1;
- (void)storeInvalidatedForIdentifier:(id)a0;
- (id)_initWithDataStore:(id)a0 lsWorkspace:(id)a1;
- (id)urlByAppendingString:(id)a0 toURL:(id)a1;
- (BOOL)migrateFromApplicationStore:(id)a0 toApplicationStore:(id)a1 error:(id *)a2;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (void)_handleApplicationInstalled:(id)a0;

@end
