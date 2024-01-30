@class NSString, BRCAccountSessionFPFS, NSMutableDictionary, NSError, NSObject, BRDSIDString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {
    NSString *_ubiquityTokenSalt;
    BRDSIDString *_dbAccountDSID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
}

@property (readonly, nonatomic) BOOL finishedLoading;
@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (readonly, nonatomic) NSString *acAccountID;
@property (readonly, nonatomic) BRCAccountSessionFPFS *session;
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

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (id)ubiquityTokenSalt;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (BOOL)_loadOnDiskAccountSessionSecondTry:(id)a0 prevError:(id)a1;
- (BOOL)_loadOnDiskAccountSessionWithError:(id *)a0;
- (void)_updateAccountToDSID:(id)a0;
- (void)addFileProviderDomainForAccount:(id)a0 error:(id *)a1;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (BOOL)createAccountSessionWithDSID:(id)a0 error:(id *)a1;
- (BOOL)destroyCurrentAccountSynchronously;
- (BOOL)destroySessionSynchronously;
- (id)initWithACAccountID:(id)a0;
- (void)jetsamCloudDocsApps;
- (void)markMigrationCompletedForDSID:(id)a0;
- (void)reloadSyncedFolderPolicies;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (BOOL)setDBAccountDSID:(id)a0;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 shouldPostAccountChangedNotification:(BOOL)a3 completion:(id /* block */)a4;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (void)startAndLoadAccountSynchronously:(id)a0;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (void)__destroySession;

@end
