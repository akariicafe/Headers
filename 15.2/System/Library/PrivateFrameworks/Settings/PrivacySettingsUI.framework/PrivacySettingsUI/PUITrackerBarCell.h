@class UIStackView, UIColor, UIImageView, NSArray, UILabel, UIView;

@interface PUITrackerBarCell : PSTableCell

@property (retain, nonatomic) UILabel *iconLabelView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UILabel *tertiaryLabel;
@property (retain, nonatomic) UIImageView *appAttributedView;
@property (retain, nonatomic) UIImageView *appAttributedBackgroundView;
@property (retain, nonatomic) UIStackView *barStackView;
@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIColor *barColor;
@property (retain, nonatomic) NSArray *constraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;

@end
