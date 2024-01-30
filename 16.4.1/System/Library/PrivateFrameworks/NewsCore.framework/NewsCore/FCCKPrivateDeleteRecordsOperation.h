@class NSArray;

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (copy, nonatomic) id /* block */ deleteRecordsCompletionBlock;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;

@end
