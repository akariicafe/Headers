@class NSString;

@interface DKPasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ verifyPasscode;
@property (copy, nonatomic) id /* block */ passcodeVerified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)completionButtonTitleForPasscodeViewController:(id)a0;
- (void)passcodeViewController:(id)a0 didEnterPasscode:(id)a1;
- (BOOL)passcodeViewController:(id)a0 shouldEnableCompletionButtonForPasscode:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setUnlockScreenType:(int)a0 simplePasscodeType:(int)a1;

@end
