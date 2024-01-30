@class SFDialogContentView, UISwipeGestureRecognizer, _SFKeyboardLayoutAlignmentView, NSLayoutConstraint, UITapGestureRecognizer;
@protocol _SFDialogViewDelegate;

@interface _SFDialogView : UIView {
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    _SFKeyboardLayoutAlignmentView *_keyboardAlignmentView;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
}

@property (weak, nonatomic) id<_SFDialogViewDelegate> delegate;
@property (readonly, nonatomic) SFDialogContentView *contentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)didAppear;
- (void).cxx_destruct;
- (void)setMessageText:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)setObscuredInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)willDisappear;
- (void)setInputText:(id)a0 placeholder:(id)a1;
- (void)setPasswordText:(id)a0 placeholder:(id)a1;
- (void)setTableViewRows:(id)a0 didSelectRowAction:(id /* block */)a1;
- (void)setDialogActions:(id)a0;
- (void)setUsesOpaqueAppearance:(BOOL)a0;
- (void)_keyboardDismissGesture:(id)a0;

@end
