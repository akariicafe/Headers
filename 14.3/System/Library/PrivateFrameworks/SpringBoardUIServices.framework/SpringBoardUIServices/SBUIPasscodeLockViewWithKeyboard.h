@class UIControl, NSString, SBPasscodeKeyboardAnimator, UILabel, SBUIAlphanumericPasscodeEntryField, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    UIControl *_emergencyCallButton;
    BOOL _usesLightStyle;
    BOOL _isResigningResponderStatus;
    BOOL _keyboardVisible;
    double _keyboardHeightOffset;
    BOOL _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
}

@property (retain, nonatomic) UILabel *statusField;
@property (retain, nonatomic) UILabel *statusSubtitleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setShowsEmergencyCallButton:(BOOL)a0;
- (void)setShowsStatusField:(BOOL)a0;
- (void)updateForTransitionToPasscodeView:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStatusText:(id)a0 subtitle:(id)a1 animated:(BOOL)a2;
- (void)_luminanceBoostDidChange;
- (id)passcode;
- (void)becomeActiveWithAnimationSettings:(id)a0;
- (void)beginTransitionToState:(long long)a0;
- (void)didEndTransitionToState:(long long)a0;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithLightStyle:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_newStatusField;
- (id)_newStatusSubtitleView;
- (void)_hardwareReturnKeyPressed:(id)a0;
- (void)_keyboardDidHideNotification:(id)a0;
- (void)_keyboardWillShowNotification:(id)a0;
- (void)_toggleForEmergencyCall;
- (void)_keyboardWillChangeFrameNotification:(id)a0;
- (void)_keyboardDidRequestDismissalNotification:(id)a0;
- (void)_toggleForStatusField;
- (void)_setKeyboardTracksLockView:(BOOL)a0;
- (id)_viewForKeyboardTracking;
- (void)_layoutForMinimizationState:(BOOL)a0;
- (void)_acceptOrCancelReturnKeyPress;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keyboardFrameForInterfaceOrientation:(long long)a0;
- (double)_keyboardToEntryFieldOffset;
- (double)_largeTextEmergencyButtonMaxWidth;
- (void)_layoutStatusView;
- (double)_statusTitleWidth;
- (double)_statusFieldHeightWithWidth:(double)a0;
- (void)passcodeEntryFieldDidAcceptEntry:(id)a0;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)a0;
- (void)passcodeEntryFieldDidCancelEntry:(id)a0;
- (BOOL)passcodeEntryField:(id)a0 shouldInsertText:(id)a1;
- (void)passcodeEntryFieldTextDidChange:(id)a0;
- (BOOL)passcodeEntryFieldShouldShowSystemKeyboard:(id)a0;
- (void)resignActiveWithAnimationSettings:(id)a0;
- (id)_statusTitleView;
- (id)_statusSubtitleView;
- (id)_alphanumericPasscodeEntryField;

@end
