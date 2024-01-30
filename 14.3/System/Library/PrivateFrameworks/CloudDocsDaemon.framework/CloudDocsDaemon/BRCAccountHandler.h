@class BRCAccountSession, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_workloop, OS_dispatch_queue, BRCAccountHandlerDelegate;

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {
    NSString *_currentAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
}

@property (weak, nonatomic) id<BRCAccountHandlerDelegate> delegate;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *pushWorkloop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mobileDocsAccountID;
+ (id)primaryiCloudAccountID;
+ (void)_migrateAccountIfNecessaryForAccountID:(id)a0;
+ (id)primaryiCloudAccount;
+ (BOOL)destroyCurrentAccountSynchronously;
+ (id)accountIDPath;
+ (id)dbAccountID;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)reloadSyncedFolderPolicies;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void)_destroyCurrentSessionSynchronously;
- (id)init;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyCurrentSessionSynchronously;
- (BOOL)createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void)_updateAccountToAccountID:(id)a0;
- (void)__destroySessionWithIntents:(id)a0;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (void)markMigrationCompletedForDSID:(id)a0;
- (void)_handleAccountDidChange;
- (void)jetsamCloudDocsApps;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (void)startAndLoadCurrentAccountSynchronously;
- (BOOL)setDBAccountID:(id)a0;
- (BOOL)_loadCurrentOnDiskAccountSessionWithError:(id *)a0;
- (void)_handleAccountWillChange;

@end
