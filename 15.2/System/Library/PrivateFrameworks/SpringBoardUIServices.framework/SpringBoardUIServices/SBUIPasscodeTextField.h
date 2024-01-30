@interface SBUIPasscodeTextField : UITextField {
    BOOL _previousResponderRequiresKeyboard;
}

@property (nonatomic) BOOL showsSystemKeyboard;

- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_enableAutomaticAppearance;
- (void)_disableAutomaticAppearance;

@end
