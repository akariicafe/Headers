@class NSError, NSString, NSHashTable, NSMutableDictionary, BRCAccountSession, BRDSIDString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {
    NSString *_ubiquityTokenSalt;
    BRDSIDString *_dbAccountDSID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableArray *_accountsNeedingAddDomain;
    NSMutableDictionary *_syncPolicyByFolderType;
    NSHashTable *_delegates;
}

@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (readonly, nonatomic) NSString *acAccountID;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSString *accountPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *pushWorkloop;
@property (retain, nonatomic) NSError *loggedOutError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_migrateAccountIfNecessaryForAccountDSID:(id)a0;
+ (id)currentiCloudAccount;
+ (id)currentiCloudAccountID;

- (void)addDelegate:(id)a0;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)removeDelegate:(id)a0;
- (void)_addDomainAfterSetupComplete;
- (void)markMigrationCompletedForDSID:(id)a0;
- (void)_handleAccountWillChange;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 shouldPostAccountChangedNotification:(BOOL)a3 completion:(id /* block */)a4;
- (void)addFileProviderDomainForAccount:(id)a0 error:(id *)a1;
- (void)_updateAccountToDSID:(id)a0;
- (BOOL)destroyCurrentAccountSynchronously;
- (void)_destroyCurrentSessionSynchronously;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (BOOL)_loadOnDiskAccountSessionWithError:(id *)a0;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_handleAccountDidChange;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (void)__destroySessionWithIntents:(id)a0;
- (BOOL)createAccountSessionWithDSID:(id)a0 error:(id *)a1;
- (BOOL)setDBAccountDSID:(id)a0;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (void)startAndLoadAccountSynchronously:(id)a0;
- (BOOL)destroySessionSynchronously;
- (void)reloadSyncedFolderPolicies;
- (void)dealloc;
- (void)jetsamCloudDocsApps;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (id)ubiquityTokenSalt;
- (id)initWithACAccountID:(id)a0;

@end
