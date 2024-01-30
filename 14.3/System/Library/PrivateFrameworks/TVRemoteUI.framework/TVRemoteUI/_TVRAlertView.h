@class TVRCPINEntryAttributes, _TVRMAlertButton, UIVisualEffectView, _TVRPasscodeField, UILabel, UIView, NSString;
@protocol _TVRAlertViewDelegate;

@interface _TVRAlertView : UIView

@property (retain, nonatomic) UIView *blendModeView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *hairlineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) _TVRPasscodeField *passcodeField;
@property (retain, nonatomic) _TVRMAlertButton *cancelButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes;
@property (weak, nonatomic) id<_TVRAlertViewDelegate> delegate;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_cancelButton:(id)a0;
- (void)_pinTextDidChange:(id)a0;
- (void)_passcodeFieldTapped;

@end
