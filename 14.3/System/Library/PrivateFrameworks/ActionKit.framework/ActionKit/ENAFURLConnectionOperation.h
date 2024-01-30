@class NSData, NSString, NSRecursiveLock, NSError, NSSet, NSOutputStream, NSURLResponse, NSURLRequest, NSInputStream, NSURLConnection;

@interface ENAFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying>

@property (nonatomic) short state;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *responseData;
@property (copy, nonatomic) NSString *responseString;
@property (nonatomic) long long totalBytesRead;
@property (copy, nonatomic) id /* block */ uploadProgress;
@property (copy, nonatomic) id /* block */ downloadProgress;
@property (copy, nonatomic) id /* block */ authenticationAgainstProtectionSpace;
@property (copy, nonatomic) id /* block */ authenticationChallenge;
@property (copy, nonatomic) id /* block */ cacheResponse;
@property (copy, nonatomic) id /* block */ redirectResponse;
@property (retain, nonatomic) NSSet *runLoopModes;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)a0;

- (void)cancel;
- (BOOL)isReady;
- (void)finish;
- (id)initWithRequest:(id)a0;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)setCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (BOOL)isPaused;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithCoder:(id)a0;
- (void)pause;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)setInputStream:(id)a0;
- (void)start;
- (id)inputStream;
- (void)resume;
- (BOOL)isConcurrent;
- (void)encodeWithCoder:(id)a0;
- (void)setDownloadProgressBlock:(id /* block */)a0;
- (void)setUploadProgressBlock:(id /* block */)a0;
- (void)setAuthenticationAgainstProtectionSpaceBlock:(id /* block */)a0;
- (void)setAuthenticationChallengeBlock:(id /* block */)a0;
- (void)setCacheResponseBlock:(id /* block */)a0;
- (void)setRedirectResponseBlock:(id /* block */)a0;
- (void)operationDidStart;
- (void)cancelConnection;

@end
