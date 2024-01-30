@class NWURLSessionDelegateWrapper, NSString, NSOperationQueue, NSURLSessionConfiguration, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, NSURLSessionDelegate;

@interface NWURLSession : NSObject {
    _Atomic unsigned long long taskIdentifier;
    NSURLSessionConfiguration *_internalConfiguration;
    NSMutableSet *_dataTasks;
    NSMutableSet *_uploadTasks;
    NSMutableSet *_downloadTasks;
    NSMutableSet *_streamTasks;
    NSMutableSet *_webSocketTasks;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_delegateWrapper;
}

@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly, nonatomic) id<NSURLSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
@property (copy) NSString *sessionDescription;

+ (void)_strictTrustEvaluate:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_disableAppSSO;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (id)dataTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1;
- (id)downloadTaskWithResumeData:(id)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)webSocketTaskWithRequest:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)webSocketTaskWithURL:(id)a0 protocols:(id)a1;
- (id)streamTaskWithNetService:(id)a0;
- (void)resetWithCompletionHandler:(id /* block */)a0;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1 completionHandler:(id /* block */)a2;
- (id)streamTaskWithHostName:(id)a0 port:(long long)a1;
- (id)webSocketTaskWithURL:(id)a0;
- (id)dataTaskWithURL:(id)a0;
- (id)downloadTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)downloadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)downloadTaskWithURL:(id)a0;
- (id)dataTaskWithRequest:(id)a0;
- (void)getTasksWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finishTasksAndInvalidate;
- (id)downloadTaskWithRequest:(id)a0;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidateAndCancel;
- (id)downloadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;

@end
