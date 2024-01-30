@class TPButton;

@interface TPBottomSingleButtonBar : TPBottomBar {
    id _delegate;
    TPButton *_button;
}

+ (id)_backgroundImage;

- (void).cxx_destruct;
- (id)button;
- (double)buttonWidth;
- (void)setButton:(id)a0 andStyle:(BOOL)a1;

@end
