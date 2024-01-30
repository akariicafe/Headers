@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
    TPButton *_button2;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)button2;
- (double)_buttonWidth;
- (void)_layoutButtons;
- (void)setButton:(id)a0 andStyle:(BOOL)a1;
- (void)setButton2:(id)a0 andStyle:(BOOL)a1;

@end
