@class NSArray, FCCKContentDatabase, NSError;

@interface FCCKMultiFeedQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    long long _sortingFunction;
    unsigned long long _queryPriority;
    NSArray *_articleLinkKeys;
    id /* block */ _queryCompletionHandler;
    NSArray *_networkEvents;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultIssueRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
