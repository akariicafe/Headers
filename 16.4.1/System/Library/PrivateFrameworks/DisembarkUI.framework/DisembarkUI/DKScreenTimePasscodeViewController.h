@class NSString;

@interface DKScreenTimePasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ verifyPasscode;
@property (copy, nonatomic) id /* block */ passcodeVerified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)passcodeViewController:(id)a0 shouldEnableCompletionButtonForPasscode:(id)a1;
- (id)completionButtonTitleForPasscodeViewController:(id)a0;
- (void)passcodeViewController:(id)a0 didEnterPasscode:(id)a1;
- (id)initWithDeviceName:(id)a0;

@end
