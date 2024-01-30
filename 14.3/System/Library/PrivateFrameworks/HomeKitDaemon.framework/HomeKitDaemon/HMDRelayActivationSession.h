@class HMDFairPlaySAPSession, HMFTimer, NSURLSession, NSOperationQueue, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDRelayActivationSession : HMFObject <HMDFairPlaySAPSessionDelegate, HMFTimerDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMDFairPlaySAPSession *fairPlaySAPSession;
@property (retain, nonatomic) HMFTimer *fairPlaySessionTimer;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedSession;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)requestChallengeWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestCertificateWithCertificateRequest:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)session:(id)a0 didCloseWithError:(id)a1;
- (void)session:(id)a0 didReceiveServerCertificateRequestWithCompletionHandler:(id /* block */)a1;
- (void)session:(id)a0 didReceiveClientExchangeData:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setupFairPlaySession;
- (void)_teardownFairPlaySession;
- (void)_cancelAllPendingRequestOperations;
- (void)_resumeRequestOperations;
- (void)_suspendRequestOperations;
- (void)_handleFairPlayCertificateResponseData:(id)a0 response:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleFairPlaySetupExchangeResponseData:(id)a0 response:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleChallengeResponseData:(id)a0 response:(id)a1 error:(id)a2 fairPlaySession:(id)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)_addRequestOperation:(id)a0;
- (void)_verifyURLResponse:(id)a0 responseData:(id)a1 fairPlaySession:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleCertificateResponseData:(id)a0 response:(id)a1 error:(id)a2 fairPlaySession:(id)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)_requestFairPlayCertificateWithCompletionHandler:(id /* block */)a0;
- (void)_requestFairPlaySetupExchangeWithExchangeData:(id)a0 completionHandler:(id /* block */)a1;

@end
