@class NSString;

@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)stringsBundle;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)didCancelEnteringPIN;

@end
