@class UIButton;

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {
    UIButton *_button;
}

+ (long long)tableViewCellStyle;

- (id)init;
- (void).cxx_destruct;
- (void)pk_applyAppearance:(id)a0;
- (void)layoutSubviews;
- (void)_updateDisplay:(BOOL)a0;
- (void)_updateDisplayForFieldTypeLabel:(id)a0;
- (void)_buttonTapped;
- (double)minimumTextFieldOffset;
- (void)setMinimumTextLabelWidth:(double)a0;
- (id)editableTextField;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
