@class UIButton;

@interface HKInfographicButtonViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ didTapButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tapped;
- (id)_buttonFont;
- (id)_buttonTextColor;
- (void).cxx_destruct;
- (id)_buttonColor;
- (id)_buttonWithFont:(id)a0;

@end
