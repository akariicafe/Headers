@class BCCloudChangeTokenController, NSString, BDSServiceProxy, BCCloudDataSyncManager, BCCloudDataManager, BCCloudDataSource, NSManagedObjectModel;

@interface BCCloudSecureUserDataManager : NSObject <BCCloudDataSyncManagerDelegate, BCCloudSecureUserDataManager, BDSCloudKitSupportSignOutDeleteWithoutInstance>

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) BOOL proxyMode;
@property (retain, nonatomic) BCCloudDataSource *secureUserDataSource;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;
@property (retain, nonatomic) BCCloudDataManager *dataManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (nonatomic) BOOL enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;
+ (id)sharedClientXPCProxy;

- (id)entityName;
- (void).cxx_destruct;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)setEnableSecureUserDataCloudSync:(BOOL)a0;
- (void)currentCloudSyncVersions:(id /* block */)a0;
- (void)setUserDatum:(id)a0 completion:(id /* block */)a1;
- (void)setUserData:(id)a0 completion:(id /* block */)a1;
- (void)deleteUserDatumForKey:(id)a0 completion:(id /* block */)a1;
- (void)userDatumForKey:(id)a0 completion:(id /* block */)a1;
- (void)userDatumIncludingDeleted:(BOOL)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)fetchUserDataIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)getUserDataChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)resolvedUserDataValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)userDataValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)setUserDataValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 startSyncToCKWithCompletion:(id /* block */)a1;
- (void)signalSyncToCKForSyncManager:(id)a0;
- (void)syncManager:(id)a0 removeCloudDataForIDs:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 updateSyncGenerationFromCloudData:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 resolveConflictsForRecords:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 failedRecordIDs:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 fetchedAllRecordsInZone:(id)a1;
- (void)removeUserDataForSaltedHashedRecordIDs:(id)a0 completion:(id /* block */)a1;
- (void)updateSyncGenerationFromCloudData:(id)a0 completion:(id /* block */)a1;

@end
