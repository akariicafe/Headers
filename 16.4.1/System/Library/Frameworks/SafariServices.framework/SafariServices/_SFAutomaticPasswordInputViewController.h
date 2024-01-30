@class NSString, NSLayoutConstraint, SFAutomaticPasswordInputView;
@protocol _SFAutoFillContextProviding;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing> {
    SFAutomaticPasswordInputView *_inputView;
    NSString *_password;
    struct CGSize { double width; double height; } _portraitKeyboardSize;
    struct CGSize { double width; double height; } _landscapeKeyboardSize;
    NSLayoutConstraint *_heightConstraint;
    long long _currentInterfaceOrientation;
    long long _keyboardType;
    BOOL _logGeneratedPasswordAcceptedImplicitly;
    NSString *_autoFillContextProtocolObjectUUID;
}

@property (weak, nonatomic) id<_SFAutoFillContextProviding> autoFillContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)inputViewControllerWithAutoFillContext:(id)a0 passwordRules:(id)a1 completion:(id /* block */)a2;
+ (void)inputViewControllerWithAutoFillContext:(id)a0 passwordRules:(id)a1 overrideApplicationIdentifier:(id)a2 completion:(id /* block */)a3;
+ (void)_inputViewControllerWithAutoFillContext:(id)a0 passwordRules:(id)a1 overrideApplicationIdentifier:(id)a2 completion:(id /* block */)a3;

- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (void)inputViewControllerDidSelectUseStrongPassword:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateKeyboardHeight;
- (void)_postButtonPressedNotificationForButton:(long long)a0;
- (void)dismissKeyboardPreservingFirstResponderIfNecessary;
- (void)viewDidLoad;
- (id)initWithPassword:(id)a0 keyboardType:(long long)a1;
- (BOOL)_inputViewControllerShouldDirectlyInsertPassword;
- (id)inputViewControllerOtherOptionsMenu:(id)a0;
- (struct CGSize { double x0; double x1; })_currentKeyboardSize;
- (void)_dismissKeyboard:(id)a0;
- (void)inputViewControllerDidSelectUseCustomPassword:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForInputView:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
