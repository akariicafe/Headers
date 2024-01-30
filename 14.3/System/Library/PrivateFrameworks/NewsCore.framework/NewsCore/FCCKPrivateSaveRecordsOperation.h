@class NSArray;

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecords;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (copy, nonatomic) id /* block */ saveRecordsCompletionBlock;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
