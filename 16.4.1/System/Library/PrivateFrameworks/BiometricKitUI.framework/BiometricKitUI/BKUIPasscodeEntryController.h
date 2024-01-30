@class NSString;

@interface BKUIPasscodeEntryController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ passcodeEntryAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDevicePasscodeSet;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (BOOL)passcodeViewController:(id)a0 shouldEnableCompletionButtonForPasscode:(id)a1;
- (id)completionButtonTitleForPasscodeViewController:(id)a0;
- (void)passcodeViewController:(id)a0 didEnterPasscode:(id)a1;
- (int)simplePasscodeType;
- (int)unlockType;
- (BOOL)verifyPasscode:(id)a0;
- (id)initWithVerifiedPasscodeAction:(id /* block */)a0;
- (void)cancelPasscodeEntry;
- (void)setUnlockScreenType:(int)a0 simplePasscodeType:(int)a1;

@end
