@class UILabel, NSLayoutConstraint;

@interface HKInfographicContentViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_titleFont;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)_descriptionFont;
- (void).cxx_destruct;
- (id)_labelWithFont:(id)a0;

@end
