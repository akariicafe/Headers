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

- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAuthentication:(id)a0;

@end
