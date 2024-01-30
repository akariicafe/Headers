@class NSString, ICAccount, NSData;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *mergeableData;

+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newAccountDataForAccount:(id)a0;
+ (id)newAccountDataWithIdentifier:(id)a0 account:(id)a1;
+ (id)accountDataWithIdentifier:(id)a0 context:(id)a1;

- (id)recordZoneName;
- (id)cloudAccount;
- (BOOL)mergeWithMergeableData:(id)a0;
- (BOOL)isInICloudAccount;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (BOOL)isDeletable;
- (id)newlyCreatedRecord;
- (void)saveMergeableDataIfNeeded;
- (id)recordName;
- (id)recordType;

@end
