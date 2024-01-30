@class NSHashTable, NSString, NSError, NSURLSession, NSURL, NSObject, NSMutableData, NSURLSessionTask, NSHTTPURLResponse;
@protocol OS_dispatch_queue, TPSURLSessionDelegate;

@interface TPSURLSessionTask : NSObject {
    NSObject<OS_dispatch_queue> *_sessionTaskDelegateQueue;
}

@property (retain, nonatomic) NSHashTable *sessionTaskDelegates;
@property (weak, nonatomic) NSURLSession *underlyingSession;
@property (weak, nonatomic) id<TPSURLSessionDelegate> networkDelegate;
@property (nonatomic) struct TPSURLSessionDelegateResponds { BOOL willCacheResponse; BOOL downloadTaskDidFinishDownloadingToURL; BOOL didReceiveResponse; BOOL didCompleteWithError; BOOL taskDidReceiveChallenge; } delegateResponds;
@property (nonatomic) float priority;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) BOOL isCacheData;
@property (nonatomic) unsigned long long downloadTaskTotalBytes;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *requestType;
@property (retain, nonatomic) id formattedData;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSMutableData *dataTaskData;
@property (retain, nonatomic) NSError *dataError;
@property (readonly, nonatomic) NSURL *URL;

+ (struct TPSURLSessionDelegateResponds { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })delegateRespondsWithDelegate:(id)a0;

- (void)registerDelegate:(id)a0;
- (void)setPriority:(float)a0;
- (float)priority;
- (void)cancel;
- (void)dealloc;
- (void)unregisterDelegate:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithSessionTask:(id)a0 identifier:(id)a1;
- (void)didCompleteWithError:(id)a0;

@end
