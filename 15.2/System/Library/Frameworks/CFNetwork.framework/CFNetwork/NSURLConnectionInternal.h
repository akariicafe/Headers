@class NSString, NSDictionary, NSOperationQueue, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSDictionary *_connectionProperties;
    BOOL _connectionActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(const struct InternalInit { id x0; id x1; id x2; id x3; BOOL x4; long long x5; } *)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)_invalidate;
- (id)_timingData;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)invokeForDelegate:(id /* block */)a0;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)dealloc;
- (void)_setDelegateQueue:(id)a0;

@end
