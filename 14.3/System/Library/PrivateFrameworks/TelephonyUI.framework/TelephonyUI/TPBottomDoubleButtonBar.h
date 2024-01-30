@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
    TPButton *_button2;
}

- (void).cxx_destruct;
- (id)button2;
- (void)layoutSubviews;
- (void)_layoutButtons;
- (double)_buttonWidth;
- (void)setButton:(id)a0 andStyle:(BOOL)a1;
- (void)setButton2:(id)a0 andStyle:(BOOL)a1;

@end
