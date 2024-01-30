@class NSDate, NSString, NSURL, NSURLSession, NSFileHandle, NSTimer, DAStatusReport, NSURLSessionDataTask, NSMutableData;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NSMutableData *connectionData;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) BOOL sendDataUpdateCallback;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSTimer *idleTimer;
@property (retain, nonatomic) NSString *startRunloopDescriptionString;
@property (nonatomic) BOOL finished;
@property (weak, nonatomic) id<SubCalURLRequestDelegate> delegate;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL useFileCache;
@property (retain, nonatomic) DAStatusReport *statusReport;
@property (nonatomic) BOOL wasUserRequested;
@property (readonly, nonatomic) long long expectedDataSize;
@property (readonly, nonatomic) long long receivedDataSize;
@property (nonatomic) BOOL useShortTimeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_initializeFileCache;
+ (id)_cachedICSFilesDirectory;

- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void).cxx_destruct;
- (void)_idleTimerFired;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_finishWithError:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)startConnection;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_cancelIdleTimer;
- (void)_setHeadersOnRequest:(id)a0;
- (void)_markStartTime;
- (void)_markEndTime;
- (void)_handleAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)_receivedDataForFile:(id)a0;
- (void)_extendIdleTimer;
- (BOOL)_canAuthenticateAgainstProtectionSpace:(id)a0;
- (void)_respondToChallenge:(id)a0 withCredential:(id)a1 noCredentialBehavior:(int)a2 completionHandler:(id /* block */)a3;
- (void)_openFileHandle;
- (id)initWithURL:(id)a0 wasUserRequested:(BOOL)a1;
- (void)_createIdleTimer;

@end
