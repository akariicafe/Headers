@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecordZones;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (nonatomic) BOOL canBypassEncryptionRequirement;
@property (copy, nonatomic) id /* block */ saveRecordZonesCompletionBlock;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
