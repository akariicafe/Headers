@class UIButton;

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {
    UIButton *_button;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)editableTextField;
- (void)_updateDisplay:(BOOL)a0;
- (void)_buttonTapped;
- (void)_updateDisplayForFieldTypeLabel:(id)a0;
- (double)minimumTextFieldOffset;
- (void)pk_applyAppearance:(id)a0;
- (void)setMinimumTextLabelWidth:(double)a0;

@end
