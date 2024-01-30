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

- (void)performOperation;
- (BOOL)validateOperation;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void)_continueModifying;
- (void).cxx_destruct;
- (id)init;

@end
