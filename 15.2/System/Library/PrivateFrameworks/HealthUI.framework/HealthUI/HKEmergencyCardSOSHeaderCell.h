@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell

@property (retain, nonatomic) UILabel *headerLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateTextColor;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)tintColorDidChange;

@end
