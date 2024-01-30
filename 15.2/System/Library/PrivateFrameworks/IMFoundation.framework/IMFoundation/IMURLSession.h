@class NSURLSession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMURLSession : NSObject <NSURLSessionDataDelegate> {
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _requireIDSHost;
}

@property (class, readonly, nonatomic) IMURLSession *sharedSession;
@property (class, readonly, nonatomic) IMURLSession *sharedSessionRequiringIDSHost;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConfiguration:(id)a0 queue:(id)a1 requiresIDSHost:(BOOL)a2;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 queue:(id)a1 requiresIDSHost:(BOOL)a2;
- (void)performRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;
- (void)performRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)finishTasksAndInvalidate;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;

@end
