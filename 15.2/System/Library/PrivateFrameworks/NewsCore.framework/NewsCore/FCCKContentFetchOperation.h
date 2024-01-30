@class NSArray, FCCKContentDatabase, NSDictionary;

@interface FCCKContentFetchOperation : FCNetworkOperation {
    BOOL _getPermanentAssetURLs;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSArray *_desiredKeys;
    id /* block */ _perRecordCompletionBlock;
    id /* block */ _fetchRecordsCompletionBlock;
    NSArray *_requestUUIDs;
    NSDictionary *_resultRecordsByRecordID;
}

- (void)performOperation;
- (BOOL)validateOperation;
- (id)throttleGroup;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
