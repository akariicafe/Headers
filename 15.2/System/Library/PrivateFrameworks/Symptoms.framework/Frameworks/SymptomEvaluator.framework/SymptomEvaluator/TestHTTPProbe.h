@class NSURLSession, NSString, NSURL, NSURLSessionDataTask;

@interface TestHTTPProbe : TestProbe <NSURLSessionDelegate> {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlSessionTask;
}

@property (retain, nonatomic) NSURL *urlToTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)stopTest;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)testURL:(id)a0 timeout:(double)a1 interfaceName:(id)a2 userAgent:(id)a3 reply:(id /* block */)a4;

@end
