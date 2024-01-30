@class NSString, NSURLRequest, NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;

+ (BOOL)canHandleRequest:(id)a0;
+ (void)sendAsynchronousRequest:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sendSynchronousRequest:(id)a0 returningResponse:(id *)a1 error:(id *)a2;
+ (id)connectionWithRequest:(id)a0 delegate:(id)a1;
+ (unsigned long long)_sweeperInterval;
+ (void)_setLoaderThreadPriority:(int)a0;
+ (struct __CFRunLoop { } *)resourceLoaderRunLoop;
+ (void)_collectTimingDataWithOptions:(unsigned long long)a0;
+ (unsigned long long)_timingDataOptions;
+ (void)_setSweeperInterval:(unsigned long long)a0;
+ (BOOL)_collectsTimingData;
+ (void)_setMIMETypesWithNoSizeLimit:(id)a0;
+ (void)_setCollectsTimingData:(BOOL)a0;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)setDefersCallbacks:(BOOL)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)_resumeLoading;
- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
- (void)setDelegateQueue:(id)a0;
- (id)_timingData;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (id)_initWithRequest:(id)a0 delegate:(id)a1 usesCache:(BOOL)a2 maxContentLength:(long long)a3 startImmediately:(BOOL)a4 connectionProperties:(id)a5;
- (void)start;
- (id)_cfInternal;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)defersCallbacks;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)_suspendLoading;
- (void)download;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (id)connectionProperties;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)dealloc;
- (void)cancel;
- (id)_dlInternal;

@end
