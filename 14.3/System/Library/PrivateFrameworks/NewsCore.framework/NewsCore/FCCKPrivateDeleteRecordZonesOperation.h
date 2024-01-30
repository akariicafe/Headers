@class NSArray;

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultDeletedRecordZoneIDs;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (nonatomic) BOOL secureDatabaseOnly;
@property (copy, nonatomic) id /* block */ deleteRecordZonesCompletionBlock;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
