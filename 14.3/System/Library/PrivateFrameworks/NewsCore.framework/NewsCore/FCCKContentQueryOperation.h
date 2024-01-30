@class FCEdgeCacheHint, NSArray, NSDictionary, CKQueryCursor, FCCKContentDatabase, CKQuery;

@interface FCCKContentQueryOperation : FCNetworkOperation

@property (copy, nonatomic) NSArray *requestUUIDs;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) CKQueryCursor *resultCursor;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ queryCompletionBlock;
@property (nonatomic) int networkEventType;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long queryPriority;

- (id)init;
- (void).cxx_destruct;
- (id)throttleGroup;
- (BOOL)validateOperation;
- (id)_requestOperations;
- (void)performOperation;
- (id)_ckRecordsFromQueryResponse:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (id)_ckCursorFromQueryResponse:(id)a0;

@end
