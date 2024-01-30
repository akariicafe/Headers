@class UIButton;

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {
    UIButton *_button;
}

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)editableTextField;
- (void)pk_applyAppearance:(id)a0;
- (void)setMinimumTextLabelWidth:(double)a0;
- (void)_updateDisplay:(BOOL)a0;
- (void)_updateDisplayForFieldTypeLabel:(id)a0;
- (void)_buttonTapped;
- (double)minimumTextFieldOffset;

@end
