@class NSObject, NSString, NSURL, FBSqliteApplicationDataStoreRepository, LSEnumerator;
@protocol OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate> {
    NSURL *_dataStoreURL;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}

@property (retain, nonatomic) FBSqliteApplicationDataStoreRepository *dataStore;
@property (retain, nonatomic) LSEnumerator *lsEnumerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_initWithDataStore:(id)a0 lsEnumerator:(id)a1;
- (void)objectChangedForKeys:(id)a0 application:(id)a1;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (BOOL)migrateFromApplicationStore:(id)a0 toApplicationStore:(id)a1 error:(id *)a2;
- (BOOL)removeStoreAtURL:(id)a0 error:(out id *)a1;
- (BOOL)migrateFromPlistStoreAtURL:(id)a0 toSqliteStoreAtURL:(id)a1 error:(id *)a2;
- (void)migrateApplicationStorePathIfNecessary;
- (id)urlByAppendingString:(id)a0 toURL:(id)a1;
- (void)storeInvalidatedForIdentifier:(id)a0;
- (void)dealloc;
- (void)_handleApplicationInstalled:(id)a0;
- (id)init;
- (void)_performAfterDeferredWork:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_safeObjectForKey:(id)a0 forApplication:(id)a1 ofType:(Class)a2;

@end
