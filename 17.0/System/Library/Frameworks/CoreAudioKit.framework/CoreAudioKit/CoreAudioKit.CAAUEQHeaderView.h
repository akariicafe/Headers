@interface CoreAudioKit.CAAUEQHeaderView : UIView <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ appleLogo;
    void /* unknown type, empty encoding */ auLabel;
    void /* unknown type, empty encoding */ paramStack;
    void /* unknown type, empty encoding */ border;
    void /* unknown type, empty encoding */ viewSetup;
    void /* unknown type, empty encoding */ auName;
    void /* unknown type, empty encoding */ auAbbreviatedName;
    void /* unknown type, empty encoding */ compressedHorizontalLayout;
    void /* unknown type, empty encoding */ viewConstraints;
    void /* unknown type, empty encoding */ params;
}

@property (class, nonatomic, readonly) BOOL requiresConstraintBasedLayout;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)tintColorDidChange;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (void)beginTouchWithNotification:(id)a0;
- (void)endTouchWithNotification:(id)a0;
- (void)textFieldEditingDidChange:(id)a0;

@end
