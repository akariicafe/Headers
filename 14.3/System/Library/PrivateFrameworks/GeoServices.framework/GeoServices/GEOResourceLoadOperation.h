@class NSDate, NSString, NSURL, NSURLSession, GEOApplicationAuditToken, NSObject, NSProgress, NSMutableData, NSURLSessionTask, GEOReportedProgress;
@protocol OS_dispatch_queue, GEORequestCounterTicket, OS_os_log;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation> {
    NSURL *_url;
    NSURL *_proxyURL;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id<GEORequestCounterTicket> _requestCounterTicket;
    NSString *_eTag;
    BOOL _expectsPartialContent;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
    NSString *_serviceAddress;
    NSDate *_starttime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL preferDirectNetworking;
@property (readonly, nonatomic) NSMutableData *data;
@property (readonly) NSProgress *progress;

- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)dealloc;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithResource:(id)a0 existingPartialData:(id)a1 eTag:(id)a2 auditToken:(id)a3 baseURL:(id)a4 alternateURLs:(id)a5 proxyURL:(id)a6 log:(id)a7;

@end
