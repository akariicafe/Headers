@class NSString, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {
    int _cfConnLock;
    struct _CFURLConnection { } *_cfConn;
    struct _CFURLAuthChallenge { } *_currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    struct __CFString { } *_fileName;
    BOOL _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(const struct InternalInit { id x0; id x1; id x2; id x3; BOOL x4; long long x5; } *)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)_resumeLoading;
- (void)_invalidate;
- (id)_timingData;
- (void)_setShouldSkipCancelOnRelease:(BOOL)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)start;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)_suspendLoading;
- (void)invokeForDelegate:(id /* block */)a0;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)_setDelegateQueue:(id)a0;

@end
