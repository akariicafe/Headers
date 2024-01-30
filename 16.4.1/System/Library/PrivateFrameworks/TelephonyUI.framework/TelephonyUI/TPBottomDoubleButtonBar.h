@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
    TPButton *_button2;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_buttonWidth;
- (void)_layoutButtons;
- (id)button2;
- (void)setButton2:(id)a0 andStyle:(BOOL)a1;
- (void)setButton:(id)a0 andStyle:(BOOL)a1;

@end
