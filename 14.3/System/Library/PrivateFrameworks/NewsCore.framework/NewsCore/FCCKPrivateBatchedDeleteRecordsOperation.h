@class NSMutableDictionary, NSArray, NSMutableArray, FCCKPrivateDatabase;

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordIDsToDelete;
@property (retain, nonatomic) NSMutableArray *resultDeletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) BOOL skipPreflight;
@property (nonatomic) BOOL handleIdentityLoss;
@property (copy, nonatomic) id /* block */ deleteRecordsCompletionBlock;

- (void)resetForRetry;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_continueModifying;

@end
