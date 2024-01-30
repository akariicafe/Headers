@class UILabel, UIView;

@interface MCProfileTitlePageWarningCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorLine;
@property (readonly, nonatomic) UILabel *label;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateConstraintsWithLabel:(id)a0;

@end
