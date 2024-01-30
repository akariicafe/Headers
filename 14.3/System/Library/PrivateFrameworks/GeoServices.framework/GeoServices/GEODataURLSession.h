@class NSString, NSMutableDictionary, GEODataURLSessionList, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEODataSession> {
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    int _symptomsAlternateAdviceToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEODataURLSessionList *urlSessions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly, nonatomic) NSOperationQueue *sessionIsolationOperationQueue;
@property (readonly, nonatomic) NSMutableDictionary *sessionTasks;
@property (nonatomic) unsigned int nextSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (id)downloadTaskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (id)taskWithRequest:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)taskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)pruneInactiveSessions;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_considerRetryingDueToAlternateAdvice;
- (id)urlSessionForRequest:(id)a0;
- (id)removeTaskForURLSession:(id)a0 task:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)tearDown;
- (void)_configureTask:(id)a0 withRequest:(id)a1;
- (void)didReceiveMemoryPressureWarning;
- (id)activeSessionIdentifiers;
- (BOOL)_wifiAssistRetryEnabled;
- (id)taskForURLSession:(id)a0 task:(id)a1;
- (id)createNewURLSessionWithRequest:(id)a0;
- (void)configureTask:(id)a0 withRequest:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (double)_wifiAssistRetryDelay;

@end
