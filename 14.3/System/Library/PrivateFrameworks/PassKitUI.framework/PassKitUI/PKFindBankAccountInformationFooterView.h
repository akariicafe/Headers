@class UIButton;

@interface PKFindBankAccountInformationFooterView : PKTableFooterView

@property (retain, nonatomic) UIButton *accountInformationButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_sizeForButton:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
