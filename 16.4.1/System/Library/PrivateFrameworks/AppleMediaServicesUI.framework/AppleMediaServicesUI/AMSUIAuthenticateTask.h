@class NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate>

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_createAuthKitUpdateTaskForAccount:(id)a0;
- (void)authenticateTask:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (id)initWithAuthenticationResults:(id)a0 presentingViewController:(id)a1 options:(id)a2;
- (id)_presentEngagementRequest:(id)a0;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2 bag:(id)a3;
- (id)initWithAuthenticationResults:(id)a0 presentingViewController:(id)a1 options:(id)a2 bag:(id)a3;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1 bag:(id)a2;

@end
