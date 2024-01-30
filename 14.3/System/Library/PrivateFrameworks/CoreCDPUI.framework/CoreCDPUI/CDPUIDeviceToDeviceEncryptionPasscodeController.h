@class UIViewController, BFFPasscodeViewController;
@protocol CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate, CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol;

@interface CDPUIDeviceToDeviceEncryptionPasscodeController : NSObject <BFFPasscodeViewControllerDelegate> {
    UIViewController *_presentingViewController;
    BFFPasscodeViewController *_passcodeViewController;
    id /* block */ _passcodeValidationCompletion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionLock;
    id<CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> _vm;
}

@property (weak, nonatomic) id<CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> delegate;

+ (id)passcodeControllerWithPresenter:(id)a0 vm:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)passcodeValidationCompletion;
- (void)setPasscodeValidationCompletion:(id /* block */)a0;
- (void)dismissFlowWithLocalSecret:(id)a0 error:(id)a1;
- (void)createPasscodeStateWithCompletion:(id /* block */)a0;
- (void)_userTappedCancel:(id)a0;
- (void)passcodeViewController:(id)a0 didFinishWithPasscodeCreation:(id)a1;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)a0;
- (BOOL)passcodeViewControllerAllowSkip:(id)a0;

@end
