@class NSURLSession, NSString, NSMapTable, NSURL, NSObject, OspreyMessageWriter, AbsintheAuthenticationDurations;
@protocol OS_dispatch_queue;

@interface OspreyGRPCChannel : NSObject <NSURLSessionTaskDelegate> {
    NSURLSession *_session;
    NSURL *_baseURL;
    OspreyMessageWriter *_messageWriter;
    NSMapTable *_taskToContext;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) AbsintheAuthenticationDurations *absintheDurations;
@property (copy, nonatomic) id /* block */ connectionMetricsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)setAbsintheTimestampForKey:(id)a0;
- (void)unaryRequest:(id)a0 requestData:(id)a1 responseHandler:(id /* block */)a2;
- (id)initWithURL:(id)a0 configuration:(id)a1 queue:(id)a2;
- (void)serverStreamingRequest:(id)a0 requestData:(id)a1 streamingResponseHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)clientStreamingContextForRequest:(id)a0 streamingResponseHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)bidirectionalStreamingRequest:(id)a0 streamingContext:(id)a1;
- (void)preconnect;
- (id)bidirectionalStreamingRequest:(id)a0 streamingResponseHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_startTask:(id)a0;
- (id)clientStreamingRequest:(id)a0 responseHandler:(id /* block */)a1 streamingContext:(id)a2;

@end
