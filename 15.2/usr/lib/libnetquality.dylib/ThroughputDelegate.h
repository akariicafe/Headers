@class NSError, NSString, HTTPPing, NSURLSessionConfiguration, NSDate, NSOperationQueue, NSMutableArray, NSURLRequest, NSObject, SaturationDetection;
@protocol OS_nw_endpoint;

@interface ThroughputDelegate : NSObject <NSURLSessionDataDelegate> {
    NSURLSessionConfiguration *_config;
    NSMutableArray *_tasks;
    NSMutableArray *_sessions;
    NSURLRequest *_request;
    NSError *_error;
    SaturationDetection *_saturation;
    BOOL _enablePing;
    HTTPPing *_httpPing;
    long long _min;
    long long _max;
    NSDate *_start;
    NSDate *_lastAddedTasksDate;
    NSDate *_current;
    long long _byte_accumulator;
    long long _previous_throughput;
    BOOL _saturation_reached;
    float _lastCurrent;
    long long _currentPingTime;
    float _baseRTT;
    float _maxTime;
    NSObject<OS_nw_endpoint> *_testEndpoint;
    id /* block */ _completionHandler;
    id /* block */ _saturationHandler;
    id /* block */ _progressHandler;
    NSOperationQueue *_queue;
    long long _saturation_signaled;
    int _instanceId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithConfiguration:(id)a0 withQueue:(id)a1 testEndpoint:(id)a2;
- (id)initWithConfiguration:(id)a0 withQueue:(id)a1 testEndpoint:(id)a2 minSessions:(long long)a3 maxSessions:(long long)a4 maxTime:(float)a5;
- (void)enableHTTPPing;
- (id)getPingTimes;
- (int)executeTaskWithRequest:(id)a0 progressHandler:(id /* block */)a1 saturationHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;
- (int)addTasks;
- (long long)addNewThroughputMeasurement:(unsigned long long)a0;
- (void)actUponNewThroughputMeasurement:(long long)a0;

@end
