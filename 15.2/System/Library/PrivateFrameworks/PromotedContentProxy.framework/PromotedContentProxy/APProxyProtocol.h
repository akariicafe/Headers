@class NSThread, NSArray, APProxyProtocolProperties, NSURLSessionDataTask, APNSURLSessionDemultiplexer, NSString;

@interface APProxyProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (class, readonly, nonatomic) APProxyProtocolProperties *properties;

@property (retain) NSThread *clientThread;
@property (retain) NSArray *modes;
@property double startTime;
@property (retain) NSURLSessionDataTask *task;
@property (retain) APNSURLSessionDemultiplexer *sessionDemux;
@property (nonatomic) long long requestType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInitWithRequest:(id)a0;
+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)setProxyURL:(id)a0;
+ (void)start;
+ (void)invalidateProxyDemultiplexerSessionForId:(id)a0;
+ (void)stop;

- (void)startLoading;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)stopLoading;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)_currentRunLoopModes;

@end
