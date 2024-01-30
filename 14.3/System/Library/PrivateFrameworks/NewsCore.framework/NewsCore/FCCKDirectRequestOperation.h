@class FCNetworkEvent, NSString, NSError, NSArray, FCEdgeCacheHint, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface FCCKDirectRequestOperation : FCOperation

@property (class, nonatomic) BOOL newTodayFeedEnabled;
@property (class, nonatomic) BOOL newTagFeedEnabled;

@property (copy, nonatomic) NSString *requestUUID;
@property (retain, nonatomic) FCNetworkEvent *networkEvent;
@property (retain, nonatomic) NSMutableArray *resultResponses;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRequestID;
@property (retain, nonatomic) NSError *resultError;
@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSString *containerName;
@property (nonatomic) BOOL production;
@property (nonatomic) BOOL operationFailsOnRequestFailure;
@property (nonatomic) long long requestType;
@property (nonatomic) int networkEventType;
@property (nonatomic) double timeoutIntervalForRequest;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) id /* block */ criticalNodeFailureTest;
@property (copy, nonatomic) id /* block */ requestCompletionHandler;

+ (id)URLSession;
+ (id)_headersImpactingEdgeCache;
+ (BOOL)_enableDebugLogLevel;

- (void)prepareOperation;
- (id)init;
- (id)_requestHeadersWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (id)_bundleIDToReport;
- (id)_errorFromOperationResultError:(id)a0;
- (id)_errorFromHTTPResponse:(id)a0;
- (void)performOperation;
- (id)_requestBodyData;
- (void)_processResponseData:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (id)generateHTTPRequest;

@end
