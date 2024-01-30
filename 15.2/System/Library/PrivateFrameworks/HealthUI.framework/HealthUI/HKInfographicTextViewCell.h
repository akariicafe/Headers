@class UILabel, NSLayoutConstraint;

@interface HKInfographicTextViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)_descriptionFont;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_descriptionTextColor;
- (id)_labelWithFont:(id)a0;

@end
