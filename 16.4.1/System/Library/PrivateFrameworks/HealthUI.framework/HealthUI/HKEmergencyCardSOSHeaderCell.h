@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell

@property (retain, nonatomic) UILabel *headerLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)_updateTextColor;

@end
