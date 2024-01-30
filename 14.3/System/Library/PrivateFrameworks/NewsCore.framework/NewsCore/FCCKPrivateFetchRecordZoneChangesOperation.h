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

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)_configurationForDestination:(long long)a0;
- (void)operationWillFinishWithError:(id)a0;

@end
