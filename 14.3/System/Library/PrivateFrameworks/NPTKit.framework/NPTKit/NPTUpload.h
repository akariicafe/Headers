@class NSDate, NSString, NSData, NSURLSession, NSError, NSMutableDictionary, NPTMetricResult, NSObject, NSMutableArray, NSMutableURLRequest;
@protocol OS_dispatch_source, OS_nw_activity;

@interface NPTUpload : NSObject <NSSecureCoding, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying> {
    NSURLSession *uploadSession;
    NSDate *initialTime;
    unsigned long long maxConcurrentStreams;
    unsigned long long processedStreamEndCount;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *uploadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    double recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartUpload;
    unsigned long long timedUploadLength;
    NSData *multipartData;
    double stableSpeedToLog;
    NSError *uploadError;
    BOOL stopAtFileSizeEnabled;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTMetricResult *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)setupTimer;
- (void)cleanUp;
- (void)encodeWithCoder:(id)a0;
- (id)createRandomDataOfSize:(unsigned long long)a0;
- (id)createHTTPBodyWithBoundary:(id)a0 usingData:(id)a1 withMimeType:(id)a2 withFileName:(id)a3;
- (BOOL)inTimedMode;
- (id)setupNewUploadTask:(id)a0 suspensionThresholdEnum:(int)a1;
- (void)startTasks;
- (void)cancelDispatchTimerAndSession;
- (void)cancelDispatchTimer;
- (id)realTimeSpeedMetricOverall;
- (double)checkAndReturnSpeedStablized:(id)a0;
- (BOOL)isTimerCancelledError:(id)a0;
- (int)determineSuspensionThreshold;
- (void)kickOffNewUpload:(id)a0 suspensionThresholdEnum:(int)a1;
- (BOOL)isLastTask;
- (id)aggregateResults;
- (double)minNonZeroValue:(double)a0 comparisonValue:(double)a1;
- (id)initWithNetworkActivityParent:(id)a0 concurrentStreams:(unsigned long long)a1 timedUploadLength:(unsigned long long)a2 endWhenStable:(BOOL)a3 stopAtFileSize:(BOOL)a4;
- (void)startUploadWithSize:(int)a0 toURL:(id)a1 overInterfaceType:(int)a2 completion:(id /* block */)a3;
- (id)createTempFileWithData:(id)a0 named:(id)a1;
- (void)removeTempFileNamed:(id)a0;
- (BOOL)finishedAllTasks;

@end
