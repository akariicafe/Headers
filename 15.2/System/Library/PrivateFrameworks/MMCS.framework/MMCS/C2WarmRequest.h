@class NSURLSessionTask, NSMutableURLRequest, C2RequestOptions, NSString;

@interface C2WarmRequest : NSObject <C2RequestDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSMutableURLRequest *warmRequest;
@property (retain, nonatomic) C2RequestOptions *warmOptions;
@property (retain, nonatomic) NSURLSessionTask *warmTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithData:(id)a0 callback:(id /* block */)a1;

@end
