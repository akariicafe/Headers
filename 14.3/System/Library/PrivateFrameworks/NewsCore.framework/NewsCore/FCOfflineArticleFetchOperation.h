@class NSString, FCThreadSafeMutableArray, NSObject;
@protocol FCFlintHelper, OS_dispatch_queue, FCContentContext;

@interface FCOfflineArticleFetchOperation : FCOperation <FCOfflineFetchOperationType>

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCFlintHelper> flintHelper;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) FCThreadSafeMutableArray *resultInterestTokens;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 articleID:(id)a2;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_promiseHeadline;
- (id)_promiseANFForHeadline:(id)a0;
- (id)_promiseIssueCoverForHeadline:(id)a0;
- (id)_promiseNarrativeTrackForHeadline:(id)a0;
- (void)_handleInterestToken:(id)a0;
- (void)_handleArchive:(id)a0;

@end
