@class HKNanoHostAuthorizationController, _UIAsyncInvocation, UIWindow, NSString, HKHealthPrivacyHostAuthorizationViewController;

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostAuthorizationViewController *hostViewController;
@property (retain, nonatomic) HKNanoHostAuthorizationController *nanoAuthorizationController;
@property (retain, nonatomic) UIWindow *savedKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelPresentation;
- (void)presentWithPresentationRequests:(id)a0 authorizationRequestRecord:(id)a1 completion:(id /* block */)a2;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_mainQueue_presentWithPresentationRequests:(id)a0 authorizationRequestRecord:(id)a1 completion:(id /* block */)a2;
- (void)_dismissRemoteViewController;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)a0;
- (void)_requestAndConfigureCarouselAlert:(id /* block */)a0 completion:(id /* block */)a1;
- (void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)a0;

@end
