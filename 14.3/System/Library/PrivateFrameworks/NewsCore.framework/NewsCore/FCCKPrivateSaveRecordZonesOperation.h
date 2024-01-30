@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecordZones;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) id /* block */ saveRecordZonesCompletionBlock;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
