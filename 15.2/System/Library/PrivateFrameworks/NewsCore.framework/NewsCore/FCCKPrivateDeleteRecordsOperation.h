@class NSArray;

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (copy, nonatomic) id /* block */ deleteRecordsCompletionBlock;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
