@class NSArray, NSMutableDictionary, NSError, FCCKContentDatabase, NSMutableArray;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    unsigned long long _maxBatchSize;
    id /* block */ _fetchRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableDictionary *_recordsByRecordID;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
