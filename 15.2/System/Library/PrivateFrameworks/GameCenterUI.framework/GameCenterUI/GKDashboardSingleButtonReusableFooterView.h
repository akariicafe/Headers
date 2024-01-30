@class UIButton, NSLayoutConstraint;

@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *buttonLeadingConstraint;
@property (copy, nonatomic) id /* block */ buttonTapHandler;

- (void)awakeFromNib;
- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)a0 forState:(unsigned long long)a1;

@end
