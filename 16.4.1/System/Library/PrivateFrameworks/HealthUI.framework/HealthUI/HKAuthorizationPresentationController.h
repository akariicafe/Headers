@class HKNanoHostAuthorizationController, _UIAsyncInvocation, NSString, HKHealthPrivacyHostAuthorizationViewController;

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostAuthorizationViewController *hostViewController;
@property (retain, nonatomic) HKNanoHostAuthorizationController *nanoAuthorizationController;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelPresentation;
- (void)presentWithPresentationRequests:(id)a0 authorizationRequestRecord:(id)a1 completion:(id /* block */)a2;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_mainQueue_presentWithPresentationRequests:(id)a0 authorizationRequestRecord:(id)a1 completion:(id /* block */)a2;
- (void)_makeRemoteViewControllerVisible:(id)a0;
- (void)_requestAndConfigureCarouselAlert:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;
- (void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)a0;

@end
