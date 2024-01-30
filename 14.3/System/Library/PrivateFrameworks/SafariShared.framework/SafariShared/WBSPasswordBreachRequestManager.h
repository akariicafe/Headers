@class NSURLSession, NSOperationQueue, WBSPasswordBreachContext;

@interface WBSPasswordBreachRequestManager : NSObject {
    WBSPasswordBreachContext *_context;
    NSURLSession *_session;
    NSOperationQueue *_fetchOperationQueue;
}

- (id)initWithContext:(id)a0;
- (void)fetchHighFrequencyBucketWithCompletionHandler:(id /* block */)a0;
- (void)fetchLowFrequencyBucketsForBucketIdentifiersAndClientBlindedHashes:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_buildRequestWithURL:(id)a0 headers:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchBucketAtURL:(id)a0 withClientBlindedHash:(id)a1 completionHandler:(id /* block */)a2;

@end
