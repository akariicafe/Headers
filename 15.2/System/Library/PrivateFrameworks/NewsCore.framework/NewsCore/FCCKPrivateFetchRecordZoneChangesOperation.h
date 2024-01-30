@class NSArray, FCCKPrivateDatabaseServerChangeToken, CKRecordZoneID;

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultChangedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) BOOL resultMoreComing;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) BOOL fetchNewestChangesFirst;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)_configurationForDestination:(long long)a0;

@end
