@class NSError, NSString, NetworkQualityConfiguration, NSOperationQueue, NetworkQualityExecutionsResult, NetworkQualityExecutions, NSObject, NSMutableArray, NSURLRequest;
@protocol OS_nw_endpoint;

@interface LatencyURLSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    NetworkQualityConfiguration *_config;
    NSMutableArray *_sessions;
    NSMutableArray *_tasks;
    NSMutableArray *_metrics;
    NSMutableArray *_workingMetrics;
    NSURLRequest *_request;
    NSError *_error;
    NSObject<OS_nw_endpoint> *_testEndpoint;
    id /* block */ _completionHandler;
    id /* block */ _cancelCompletionHandler;
    NSOperationQueue *_queue;
    NetworkQualityExecutionsResult *_results;
    NetworkQualityExecutions *_execution;
    NSString *_tcpKey;
    NSString *_tlsKey;
    NSString *_reqrespKey;
    NSString *_selfKey;
    NSString *_testName;
    BOOL _canceled;
    long long _parallel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelWithCompletionHandler:(id /* block */)a0;
- (BOOL)didFinishCollectingMetrics:(id)a0 task:(id)a1;
- (void)executeTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 testName:(id)a1 queue:(id)a2 testEndpoint:(id)a3 resultsObject:(id)a4 resultsDelegate:(id)a5 tcpKey:(id)a6 tlsKey:(id)a7 reqrespKey:(id)a8 selfKey:(id)a9;
- (void)shareProgress;

@end
