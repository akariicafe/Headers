@class NSDate, NSString, NetworkQualityConfiguration, NSError, NSOperationQueue, NetworkQualityExecutionsResult, NetworkQualityExecutions, NSMutableArray, NSURLRequest, NSObject, SaturationDetection;
@protocol OS_nw_endpoint;

@interface ThroughputDelegate : NSObject <NSURLSessionDataDelegate> {
    NSMutableArray *_tasks;
    NSMutableArray *_sessions;
    NSURLRequest *_request;
    NSError *_error;
    NetworkQualityConfiguration *_nqConfig;
    SaturationDetection *_saturation;
    NSDate *_start;
    NSDate *_lastAddedTasksDate;
    NSDate *_current;
    long long _byte_accumulator;
    long long _previous_throughput;
    BOOL _saturation_reached;
    float _lastCurrent;
    long long _currentBytesTransferred;
    NSObject<OS_nw_endpoint> *_testEndpoint;
    id /* block */ _completionHandler;
    id /* block */ _cancelCompletionHandler;
    id /* block */ _saturationHandler;
    NSOperationQueue *_queue;
    long long _saturation_signaled;
    NetworkQualityExecutionsResult *_results;
    NetworkQualityExecutions *_execution;
    int _instanceId;
    NSString *_testName;
    BOOL _canceled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancel;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)actUponNewThroughputMeasurement:(long long)a0;
- (long long)addNewThroughputMeasurement:(unsigned long long)a0;
- (int)addTasks;
- (id)amendRequest:(id)a0;
- (void)cancelWithCompletionHandler:(id /* block */)a0;
- (BOOL)checkLimits;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;
- (int)executeTaskWithRequest:(id)a0 saturationHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)getSessions;
- (id)initWithExecution:(id)a0 testName:(id)a1 withQueue:(id)a2 testEndpoint:(id)a3 withConfig:(id)a4 resultsObject:(id)a5;
- (long long)maxFlows;
- (long long)minFlows;
- (void)shareProgress;
- (void)updateResultsWithThroughput:(long long)a0 confidence:(long long)a1;

@end
