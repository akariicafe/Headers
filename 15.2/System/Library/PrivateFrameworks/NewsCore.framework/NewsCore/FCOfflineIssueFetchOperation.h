@class NSString, FCThreadSafeMutableArray, NSObject, FCCachePolicy;
@protocol OS_dispatch_queue, FCFlintHelper, FCContentContext;

@interface FCOfflineIssueFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    id<FCFlintHelper> _flintHelper;
    NSString *_issueID;
    FCThreadSafeMutableArray *_resultInterestTokens;
    double _progress;
    FCCachePolicy *_issueRecordCachePolicy;
}

@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (void)performOperation;
- (BOOL)validateOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 issueID:(id)a2;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 issue:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
