@class NSString;

@interface PKPaymentSetupRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (void)paymentSetupDidFinish:(id)a0;

@end
