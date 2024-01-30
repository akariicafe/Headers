@class NSURL, NSURLResponse, NSMutableData, ICURLResponseHandler, NSDictionary, NSObject, ICURLPerformanceMetrics, NSMutableDictionary, NSMutableArray, ICRequestContext, NSString, NSURLRequest, NSData, NSURLSessionTask, NSError, NSProgress;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICURLRequest : NSObject <NSProgressReporting> {
    NSMutableArray *_observers;
    NSMutableDictionary *_maxRetryCounts;
    NSMutableDictionary *_retryCounts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore;
@property (retain, nonatomic) NSURLRequest *currentURLRequest;
@property (retain, nonatomic) NSURLResponse *urlResponse;
@property (retain, nonatomic) NSMutableData *responseData;
@property (retain, nonatomic) NSURL *responseDataURL;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic, setter=setAVDownloadOptions:) NSDictionary *avDownloadOptions;
@property (nonatomic) long long handlingType;
@property (retain, nonatomic) NSString *retryReason;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (nonatomic) double startTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double lastProgressUpdateTime;
@property (retain, nonatomic) ICURLPerformanceMetrics *performanceMetrics;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL prioritize;
@property (nonatomic) BOOL cancelOnHTTPErrors;
@property (nonatomic) unsigned long long maxRetryCount;
@property (readonly, copy, nonatomic) ICRequestContext *requestContext;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double retryDelay;
@property (nonatomic) long long requestState;
@property (readonly, copy, nonatomic) NSData *resumeData;
@property (retain, nonatomic) ICURLResponseHandler *responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_responseHandlerClass;
+ (unsigned long long)_defaultMaxRetryCountForReason:(id)a0;
+ (Class)_responseClass;

- (void)_ensureValidRetryReason:(id)a0;
- (void)_incrementRetryCountForReason:(id)a0;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1 resumeData:(id)a2;
- (void)updateState:(long long)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1;
- (unsigned long long)_retryCountForReason:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_maxRetryCountForReason:(id)a0;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1 resumeData:(id)a2;
- (void)_setMaxRetryCount:(unsigned long long)a0 forReason:(id)a1;
- (void)addObserver:(id)a0;

@end
