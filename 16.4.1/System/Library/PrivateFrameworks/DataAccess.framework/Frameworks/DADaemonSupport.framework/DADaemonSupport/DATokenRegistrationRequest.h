@class NSURLSession, NSString, NSMutableURLRequest, NSData, DARefreshWrapper, AKAppleIDSession, NSURLSessionDataTask;
@protocol DATokenRegistrationDelegate;

@interface DATokenRegistrationRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (weak, nonatomic) DARefreshWrapper *wrapper;
@property (retain, nonatomic) NSString *onBehalfOfBundleIdentifier;
@property (weak, nonatomic) NSData *token;
@property (weak, nonatomic) NSString *pushKey;
@property (retain, nonatomic) AKAppleIDSession *hsa2Session;
@property (nonatomic) BOOL finished;
@property (weak, nonatomic) id<DATokenRegistrationDelegate> delegate;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithToken:(id)a0 pushKey:(id)a1 wrapper:(id)a2 onBehalfOf:(id)a3;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (BOOL)_canAuthenticateAgainstProtectionSpace:(id)a0;
- (void)_handleAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reallyHandleAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithToken:(id)a0 pushKey:(id)a1 wrapper:(id)a2 onBehalfOf:(id)a3;
- (void)sendRegistrationRequestForAccount:(id)a0;

@end
