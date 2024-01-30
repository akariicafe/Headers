@class AMSAuthenticateRequest, UIViewController, CDPUIController;

@interface AMSUIAuthenticateCloudTask : AMSTask

@property (retain, nonatomic) CDPUIController *cdpUIController;
@property (retain, nonatomic) AMSAuthenticateRequest *authRequest;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_serviceContextWithResults:(id)a0 parentViewController:(id)a1;
- (id)initWithAuthRequest:(id)a0 presentingViewController:(id)a1;
- (id)performAuthenticate;

@end
