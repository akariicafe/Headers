@class NetworkQualityExecutions, NSOperationQueue, NetworkQualityConfiguration, NetworkQualityResult;
@protocol NetworkQualityDelegate;

@interface NetworkQualityAssessment : NSObject <NetworkQualityExecutionsDelegate> {
    NetworkQualityExecutions *_execution;
    id<NetworkQualityDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NetworkQualityConfiguration *_config;
    BOOL _testRunning;
    NetworkQualityResult *_progressResults;
    long long _resultsIndex;
}

- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)cancel;
- (void)progress:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (void)finalizeResults:(id)a0 withError:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
