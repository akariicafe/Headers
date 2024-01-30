@class UILabel, NSLayoutConstraint;

@interface HKInfographicTextViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_descriptionFont;
- (void).cxx_destruct;
- (id)_descriptionTextColor;
- (id)_labelWithFont:(id)a0;

@end
