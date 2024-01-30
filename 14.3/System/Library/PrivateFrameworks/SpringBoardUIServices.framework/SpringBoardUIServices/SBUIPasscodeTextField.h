@interface SBUIPasscodeTextField : UITextField {
    BOOL _previousResponderRequiresKeyboard;
}

@property (nonatomic) BOOL showsSystemKeyboard;

- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (void)_enableAutomaticAppearance;
- (void)_disableAutomaticAppearance;

@end
