@class SFDialogContentView, UISwipeGestureRecognizer, SFKeyboardLayoutAlignmentView, NSLayoutConstraint, UITapGestureRecognizer;
@protocol SFDialogViewDelegate;

@interface SFDialogView : UIView {
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    SFKeyboardLayoutAlignmentView *_keyboardAlignmentView;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
}

@property (weak, nonatomic) id<SFDialogViewDelegate> delegate;
@property (readonly, nonatomic) SFDialogContentView *contentView;

- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)willDisappear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setObscuredInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setTitleText:(id)a0;
- (void)didAppear;
- (void).cxx_destruct;
- (void)setMessageText:(id)a0;
- (void)_keyboardDismissGesture:(id)a0;
- (void)setDialogActions:(id)a0;
- (void)setInputText:(id)a0 placeholder:(id)a1;
- (void)setPasswordText:(id)a0 placeholder:(id)a1;
- (void)setTableViewRows:(id)a0 didSelectRowAction:(id /* block */)a1;
- (void)setUsesOpaqueAppearance:(BOOL)a0;

@end
