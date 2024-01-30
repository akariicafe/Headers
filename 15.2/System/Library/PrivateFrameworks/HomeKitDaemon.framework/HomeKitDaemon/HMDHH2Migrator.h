@class HMDBackgroundOperationManager, NSString, HMDHH2MigratorRecord, NSMutableSet, HMDCoreData, HMDHomeData, HMDHH2FrameworkSwitch;

@interface HMDHH2Migrator : HMFObject <HMFLogging>

@property (retain, nonatomic) HMDHH2MigratorRecord *migratorRecord;
@property (retain, nonatomic) HMDHH2FrameworkSwitch *hh2FrameworkSwitch;
@property (retain, nonatomic) NSMutableSet *scheduledKeyRollOperationsDuringMigration;
@property (retain, nonatomic) HMDCoreData *coreData;
@property (retain, nonatomic) HMDBackgroundOperationManager *backgroundOpsManager;
@property (retain, nonatomic) HMDHomeData *homeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)startMigrationIfNeeded;
- (id)initWithCoreData:(id)a0;
- (id)initWithMigratorRecord:(id)a0 coreData:(id)a1 backgroundOperationManager:(id)a2;
- (BOOL)startMigrationFromLocation:(id)a0;
- (BOOL)startMigratingHomeDataFromLocation:(id)a0;
- (BOOL)migrateHomeData:(id)a0 managedObjectContext:(id)a1 hh2ControllerKey:(id)a2;
- (BOOL)migrateHomeManager:(id)a0 managedObjectContext:(id)a1 hh2ControllerKey:(id)a2;
- (BOOL)migrateHome:(id)a0 primaryHomeUUID:(id)a1 managedObjectContext:(id)a2 hh2ControllerKey:(id)a3;
- (BOOL)migrateHomeToCoreData:(id)a0 primaryHomeUUID:(id)a1 managedObjectContext:(id)a2 hh2ControllerKey:(id)a3;
- (BOOL)populateAndSaveCDModelsFrom:(id)a0 managedObjectContext:(id)a1 hh2ControllerKey:(id)a2 tag:(id)a3;
- (void)fixupModelForMigration:(id)a0 coreDataModelObject:(id)a1 hh2ControllerKey:(id)a2;
- (BOOL)shouldIgnoreModel:(id)a0;
- (BOOL)waitForCDToExportModelsToCloudKit:(id)a0;
- (BOOL)waitForCloudTransformToRun;
- (BOOL)didCoreDataPushAllModelsToCloudKit:(id)a0 previousToken:(id)a1 cloudStore:(id)a2;
- (id)allObjectIDsFromTransactions:(id)a0 cloudStoreIdentifier:(id)a1;
- (BOOL)rollAccessoryKeysToHH2:(id)a0 hh2ControllerKey:(id)a1;
- (BOOL)scheduleAccessoryKeyMigration:(id)a0 oldPairingIdentity:(id)a1 hh2PairingIdentity:(id)a2;
- (void)revertChangesPerformedDuringMigration;
- (BOOL)handlePostMigration;
- (BOOL)makeSureToCreateHH2SentinelZone;
- (id)backingStoreObjectsForAccountsAndDevices:(id)a0;

@end
