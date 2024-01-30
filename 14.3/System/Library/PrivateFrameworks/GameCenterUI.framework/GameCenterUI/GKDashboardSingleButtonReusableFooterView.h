@class UIButton, NSLayoutConstraint;

@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *buttonLeadingConstraint;
@property (copy, nonatomic) id /* block */ buttonTapHandler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)buttonTapped:(id)a0;
- (void)setButtonTitle:(id)a0 forState:(unsigned long long)a1;

@end
