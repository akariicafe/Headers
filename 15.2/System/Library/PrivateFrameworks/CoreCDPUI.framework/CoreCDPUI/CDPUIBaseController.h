@class NSString, UIViewController;

@interface CDPUIBaseController : NSObject <CDPStateUIProvider>

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentingViewController:(id)a0;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 showError:(id)a1 withCompletion:(id /* block */)a2;
- (void)cdpContext:(id)a0 showError:(id)a1 withDefaultIndex:(long long)a2 withCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithPresentingViewControlller:(id)a0;

@end
