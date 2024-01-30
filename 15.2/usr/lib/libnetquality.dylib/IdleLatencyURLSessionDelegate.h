@class NSError, NSString, NSObject, NSOperationQueue, NSURLSessionConfiguration, NSMutableArray, NSURLRequest;
@protocol OS_nw_endpoint;

@interface IdleLatencyURLSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    NSURLSessionConfiguration *_config;
    NSMutableArray *_sessions;
    NSMutableArray *_tasks;
    NSMutableArray *_metrics;
    NSURLRequest *_request;
    NSError *_error;
    NSObject<OS_nw_endpoint> *_testEndpoint;
    id /* block */ _completionHandler;
    id /* block */ _saturationHandler;
    NSOperationQueue *_queue;
    void *queueKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithConfiguration:(id)a0 withQueue:(id)a1 testEndpoint:(id)a2;
- (int)executeTaskWithRequest:(id)a0 saturationHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
