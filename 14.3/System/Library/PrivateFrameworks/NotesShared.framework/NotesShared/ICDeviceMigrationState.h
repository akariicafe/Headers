@class NSString, ICAccount, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (retain, nonatomic) NSDate *stateModificationDate;

+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)deviceMigrationStatesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)currentDeviceMigrationStateForAccount:(id)a0 createIfNecessary:(BOOL)a1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 context:(id)a1;
+ (id)allDeviceMigrationStatesInContext:(id)a0;
+ (id)deviceMigrationStatesByAccountIDInContext:(id)a0;
+ (id)currentDeviceMigrationStateForAccount:(id)a0;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)stringFromMigrationState:(short)a0;
+ (id)identifierForDeviceIdentifier:(id)a0;

- (id)recordZoneName;
- (void)objectWasDeletedFromCloud;
- (id)ic_loggingValues;
- (id)cloudAccount;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)deleteFromLocalDatabase;
- (id)recordType;
- (BOOL)isMigrating;
- (id)recordName;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1;
- (BOOL)isInICloudAccount;

@end
