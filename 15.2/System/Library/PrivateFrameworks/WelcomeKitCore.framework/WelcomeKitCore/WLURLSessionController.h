@class WLDeviceAuthentication, NSString, NSURLSession, NSOperationQueue;

@interface WLURLSessionController : NSObject <NSURLSessionDelegate> {
    WLDeviceAuthentication *_auth;
    NSOperationQueue *_delegateOperationQueue;
}

@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithAuthentication:(id)a0;

@end
