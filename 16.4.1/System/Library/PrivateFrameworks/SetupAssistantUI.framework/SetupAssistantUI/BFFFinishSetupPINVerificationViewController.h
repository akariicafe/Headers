@class NSString;

@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)stringsBundle;

@end
