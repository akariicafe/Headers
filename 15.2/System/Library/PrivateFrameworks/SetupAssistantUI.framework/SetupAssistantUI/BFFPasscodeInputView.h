@class UILabel, UIButton, UIView;
@protocol BFFPasscodeInputViewDelegate;

@interface BFFPasscodeInputView : UIView

@property (retain, nonatomic) UILabel *instructions;
@property (retain, nonatomic) UIButton *instructionsLinkButton;
@property (weak, nonatomic) id<BFFPasscodeInputViewDelegate> delegate;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIButton *footerButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)disable;
- (void)layoutSubviews;
- (BOOL)isFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)passcode;
- (id)passcodeDisplayView;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setPasscode:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)passcodeField;
- (void)setFooterButtonText:(id)a0;
- (void)footerButtonPressed;
- (void)_instructionsLinkButtonPressed;
- (void)_layoutForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInstructionsLinkText:(id)a0;
- (void)shakePasscode;

@end
