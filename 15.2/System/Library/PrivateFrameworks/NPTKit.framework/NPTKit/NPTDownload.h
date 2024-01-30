@class NSDate, NSString, NSError, NSURLSession, NSMutableDictionary, NPTMetricResult, NSObject, NSMutableArray, NSMutableURLRequest;
@protocol OS_dispatch_source, OS_nw_activity;

@interface NPTDownload : NSObject <NSSecureCoding, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying> {
    NSURLSession *downloadSession;
    unsigned long long processedStreamEndCount;
    unsigned long long maxConcurrentStreams;
    NSDate *initialTime;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *downloadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    double recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartDownload;
    unsigned long long timedDownloadLength;
    double stableSpeedToLog;
    NSError *downloadError;
    BOOL stopAtFileSizeEnabled;
    NSString *callingClient;
    double maxSpeedObserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTMetricResult *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancel;
- (void)setupTimer;
- (BOOL)inTimedMode;
- (void)startTasks;
- (void)cancelDispatchTimerAndSession;
- (void)cancelDispatchTimer;
- (id)realTimeSpeedMetricOverall;
- (double)checkAndReturnSpeedStablized:(id)a0;
- (BOOL)isTimerCancelledError:(id)a0;
- (BOOL)isLastTask;
- (id)aggregateResults;
- (double)minNonZeroValue:(double)a0 comparisonValue:(double)a1;
- (BOOL)finishedAllTasks;
- (id)initWithNetworkActivityParent:(id)a0 concurrentStreams:(unsigned long long)a1 timedDownloadLength:(unsigned long long)a2 endWhenStable:(BOOL)a3 stopAtFileSize:(BOOL)a4 callingClient:(id)a5;
- (void)startDownloadUsingURL:(id)a0 overInterfaceType:(int)a1 completion:(id /* block */)a2;
- (id)setupNewDownloadTask;
- (void)kickOffNewDownload;
- (id)realTimeSpeedMetric:(unsigned long long)a0;
- (id)overAllResultByTask:(unsigned long long)a0;

@end
