@class NSArray, NSDictionary, NSError, FCCKContentDatabase, FCEdgeCacheHint;

@interface FCCKOrderFeedQueryOperation : FCOperation

@property (retain, nonatomic) NSArray *resultFeedItemAndArticleRecords;
@property (retain, nonatomic) NSArray *resultTagRecords;
@property (retain, nonatomic) NSArray *resultIssueRecords;
@property (retain, nonatomic) NSArray *resultFeedResponses;
@property (retain, nonatomic) NSError *resultError;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *feedRequests;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) unsigned long long queryPriority;
@property (copy, nonatomic) NSArray *articleLinkKeys;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) id /* block */ queryCompletionHandler;

- (void)prepareOperation;
- (void)resetForRetry;
- (void).cxx_destruct;
- (id)_requiredKeys;
- (BOOL)validateOperation;
- (id)_constructFeedQuery;
- (id)_feedRelativeDictionaryFromResultsArray:(id)a0;
- (void)performOperation;
- (id)_predicateForPerFeedFieldName:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (void)operationWillFinishWithError:(id)a0;
- (void)_processResultsRecord:(id)a0 feedItemAndArticleRecords:(id)a1 tagRecords:(id)a2 issueRecords:(id)a3 requestUUID:(id)a4;

@end
