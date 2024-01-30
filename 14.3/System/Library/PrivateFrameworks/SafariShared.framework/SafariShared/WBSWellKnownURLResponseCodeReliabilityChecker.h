@class NSURL, NSOperationQueue, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
    NSURL *_url;
    NSOperationQueue *_fetchOperationQueue;
    NSURLSession *_session;
    id /* block */ _completion;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)checkReliabilityWithCompletion:(id /* block */)a0;
- (id)initWithURL:(id)a0;

@end
