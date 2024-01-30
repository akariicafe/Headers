@class NSThread, NSArray, ADNSURLSessionDemultiplexer, NSURLSessionDataTask, NSString;

@interface ADWebViewURLProxyProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (retain) NSThread *clientThread;
@property (copy) NSArray *modes;
@property double startTime;
@property (retain) NSURLSessionDataTask *task;
@property (retain) ADNSURLSessionDemultiplexer *sessionDemux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)unregister;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)createLongProxyAuthHeaderRecordForRequest:(id)a0 proxyAuthHeaderSize:(unsigned long long)a1;
+ (unsigned long long)decodedSizeForEncodedLength:(unsigned long long)a0;
+ (id)buildTrimmedUrlStringFromUrl:(id)a0 byRemovingBytes:(unsigned long long)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (void)registerProtocol;
+ (id)buildTrimmedUrlStringFromUrl:(id)a0 toReduceEncodedSizeBy:(unsigned long long)a1;
+ (unsigned long long)basicProxyAuthHeaderSizeForUser:(id)a0 withPassword:(id)a1;

- (void)startLoading;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)stopLoading;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
