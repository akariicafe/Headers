@class UILabel, NSLayoutConstraint;

@interface WDSubtitleDateTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *baselineConstraint;
@property (retain, nonatomic) UILabel *mainTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;
@property (retain, nonatomic) UILabel *dateTextLabel;

- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
