@class NSURLSession, NSMutableDictionary, NSString, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface ADNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate>

@property (retain) NSMutableDictionary *taskInfoByTaskIdentifier;
@property (retain) NSURLSessionConfiguration *configuration;
@property (retain) NSURLSession *session;
@property (copy) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *demuxQueue;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long maximumRequestCount;
@property (copy, nonatomic) id /* block */ sessionInvalidated;
@property (nonatomic) BOOL sessionMarkedInvalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)taskInfoForTask:(id)a0;
- (void)dealloc;
- (void)removeTask:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithConfiguration:(id)a0 forIdentifier:(id)a1 withMaximumRequestCount:(long long)a2;
- (void)invalidateSessionWithCompletionHandler:(id /* block */)a0;
- (id)dataTaskWithRequest:(id)a0 delegate:(id)a1 modes:(id)a2;

@end
