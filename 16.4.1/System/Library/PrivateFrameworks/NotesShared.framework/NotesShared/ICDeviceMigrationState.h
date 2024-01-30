@class NSString, ICAccount, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (retain, nonatomic) NSDate *stateModificationDate;

+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)allDeviceMigrationStatesInContext:(id)a0;
+ (id)currentDeviceMigrationStateForAccount:(id)a0;
+ (id)currentDeviceMigrationStateForAccount:(id)a0 createIfNecessary:(BOOL)a1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 context:(id)a1;
+ (id)deviceMigrationStatesByAccountIDInContext:(id)a0;
+ (id)deviceMigrationStatesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)identifierForDeviceIdentifier:(id)a0;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)stringFromMigrationState:(short)a0;

- (BOOL)isMigrating;
- (id)recordName;
- (id)recordZoneName;
- (id)recordType;
- (id)cloudAccount;
- (BOOL)isInICloudAccount;
- (void)deleteFromLocalDatabase;
- (id)ic_loggingValues;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (BOOL)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;

@end
