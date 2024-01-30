@class FCEdgeCacheHint, NSArray, NSDictionary, CKQueryCursor, CKQuery, FCCKContentDatabase;

@interface FCCKContentQueryOperation : FCNetworkOperation {
    int _networkEventType;
    FCCKContentDatabase *_database;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    id /* block */ _recordFetchedBlock;
    id /* block */ _queryCompletionBlock;
    NSArray *_requestUUIDs;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    unsigned long long _queryPriority;
    NSArray *_networkEvents;
    CKQueryCursor *_resultCursor;
}

- (void)performOperation;
- (BOOL)validateOperation;
- (id)throttleGroup;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
