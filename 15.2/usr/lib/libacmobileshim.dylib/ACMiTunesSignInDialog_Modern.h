@class NSString;

@interface ACMiTunesSignInDialog_Modern : ACMiTunesSignInDialog <UIAlertViewDelegate>

@property (nonatomic) BOOL isPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)a0;
- (void)loadView;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)didPresentAlertView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;

@end
