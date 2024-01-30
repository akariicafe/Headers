@class NSString, NSMutableDictionary, GEODataURLSessionList, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEOSystemMonitorSystemSleepObserver, GEODataSession> {
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

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (id)urlSessionForRequest:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)_configureTask:(id)a0 withRequest:(id)a1;
- (id)taskForURLSession:(id)a0 task:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)systemCanSleep:(id /* block */)a0;
- (void)tearDown;
- (BOOL)_wifiAssistRetryEnabled;
- (void)finishTasksAndInvalidateForegroundSessions:(id /* block */)a0;
- (void)didReceiveMemoryPressureWarning;
- (id)createNewURLSessionWithRequest:(id)a0;
- (id)activeSessionIdentifiers;
- (void)_considerRetryingDueToAlternateAdvice;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)pruneInactiveSessions;
- (void)configureTask:(id)a0 withRequest:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)systemDidWake;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)taskWithRequest:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)systemWillSleep:(id /* block */)a0;
- (double)_wifiAssistRetryDelay;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (id)downloadTaskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)replaceBackingTask:(id)a0 withTask:(id)a1 forURLSession:(id)a2;
- (id)removeTaskForURLSession:(id)a0 task:(id)a1;
- (id)taskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;

@end
