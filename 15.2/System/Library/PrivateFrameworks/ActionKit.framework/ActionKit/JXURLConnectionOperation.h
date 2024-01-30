@class NSOutputStream, NSString, NSURLResponse, NSMutableURLRequest, NSError, NSURLConnection;

@interface JXURLConnectionOperation : JXOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (retain) NSURLConnection *connection;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSError *error;
@property long long bytesDownloaded;
@property long long bytesUploaded;
@property (retain) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)networkThread;
+ (void)runLoopForever;

- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)initWithURL:(id)a0;
- (void)connectionDidFinishLoading:(id)a0;
- (void)stopConnection;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)startConnection;
- (void)willFinish;

@end
