@class NSMutableDictionary, NSArray, NSError, NSMutableArray, FCCKContentDatabase;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *remainingRecordIDBatches;
@property (retain, nonatomic) NSMutableDictionary *recordsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSError *operationError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) unsigned long long maxBatchSize;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;

- (void)prepareOperation;
- (void)resetForRetry;
- (void)_continueRefreshing;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
