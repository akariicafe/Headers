@class UILabel, UIView, NSLayoutConstraint;

@interface HKInfographicTableViewCell : UITableViewCell {
    BOOL hideSeparator;
}

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIView *separator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_titleFont;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSeparatorHidden:(BOOL)a0;
- (id)_valueFont;
- (id)_labelWithFont:(id)a0;

@end
