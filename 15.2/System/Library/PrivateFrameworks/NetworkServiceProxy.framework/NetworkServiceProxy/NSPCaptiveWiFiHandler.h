@class NSURLSession, NSString, NSOperationQueue, NSURLSessionDataTask;

@interface NSPCaptiveWiFiHandler : NSObject <NSURLSessionTaskDelegate>

@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (void)abort;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)cleanup;
- (void)report:(int)a0;
- (void)start;
- (void).cxx_destruct;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isHTTPResponseStatusCodeOK:(long long)a0;
- (BOOL)isHTTPResponseStatusCodeRedirect:(id)a0;
- (BOOL)evaluate:(id)a0 completionHandler:(id /* block */)a1;

@end
