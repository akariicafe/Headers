@class NSURL, NSOperationQueue, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
    NSURL *_url;
    NSOperationQueue *_fetchOperationQueue;
    NSURLSession *_session;
    id /* block */ _completion;
}

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)checkReliabilityWithCompletion:(id /* block */)a0;

@end
