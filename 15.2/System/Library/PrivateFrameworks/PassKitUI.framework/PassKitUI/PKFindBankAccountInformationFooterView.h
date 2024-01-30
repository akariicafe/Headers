@class UIButton;

@interface PKFindBankAccountInformationFooterView : PKTableFooterView {
    UIButton *_accountInformationButton;
}

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 action:(id)a1;
- (void)setButtonsEnabled:(BOOL)a0;
- (void)setupAccountInformationButtonWithAction:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeForButton:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;

@end
