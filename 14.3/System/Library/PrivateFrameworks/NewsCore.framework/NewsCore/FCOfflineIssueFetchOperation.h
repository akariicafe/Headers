@class NSString, FCThreadSafeMutableArray, FCCachePolicy, NSObject;
@protocol FCFlintHelper, OS_dispatch_queue, FCContentContext;

@interface FCOfflineIssueFetchOperation : FCOperation <FCOfflineFetchOperationType>

@property double progress;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) id<FCFlintHelper> flintHelper;
@property (copy, nonatomic) NSString *issueID;
@property (readonly, nonatomic) FCThreadSafeMutableArray *resultInterestTokens;
@property (retain, nonatomic) FCCachePolicy *issueRecordCachePolicy;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (id)_promiseIssue;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 issueID:(id)a2;
- (id)_promiseMetadataForIssue:(id)a0;
- (id)_promiseCoverImageForIssue:(id)a0;
- (id)_promiseANFArticlesForIssue:(id)a0;
- (id)_promiseANFPagesForIssue:(id)a0;
- (id)_promisePDFPagesForIssue:(id)a0;
- (id)_promiseANFArticlesForArticleIDs:(id)a0 withDownloadProgressMin:(double)a1 downloadProgressMax:(double)a2;
- (id)_itemIdentifiersForKey:(id)a0 fromMetadataJSONData:(id)a1;
- (id)_pdfArchiveURLForIssue:(id)a0;
- (id)_promiseReplicaAdPagesForIssue:(id)a0 withDownloadProgressMin:(double)a1 downloadProgressMax:(double)a2;
- (id)_resourceIDsFromMetadataJSONData:(id)a0;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 issue:(id)a2;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_handleInterestToken:(id)a0;
- (void)_handleArchive:(id)a0;
- (void)_updateProgress:(double)a0;

@end
