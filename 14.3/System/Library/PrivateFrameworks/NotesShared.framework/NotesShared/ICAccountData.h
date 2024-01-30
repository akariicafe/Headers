@class NSString, ICAccount, NSData;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *mergeableData;

+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newAccountDataForAccount:(id)a0;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newAccountDataWithIdentifier:(id)a0 account:(id)a1;
+ (id)accountDataWithIdentifier:(id)a0 context:(id)a1;

- (id)recordZoneName;
- (id)cloudAccount;
- (id)recordType;
- (void)saveMergeableDataIfNeeded;
- (BOOL)mergeWithMergeableData:(id)a0;
- (id)recordName;
- (id)newlyCreatedRecord;
- (BOOL)needsToBeDeletedFromCloud;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1;
- (BOOL)isInICloudAccount;
- (BOOL)isDeletable;

@end
