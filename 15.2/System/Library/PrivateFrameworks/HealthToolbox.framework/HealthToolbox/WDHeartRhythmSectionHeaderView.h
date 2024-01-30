@class UILabel, NSString, NSLayoutConstraint;

@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *bottomToTitleLastBaselineConstraint;
@property (copy, nonatomic) NSString *titleText;

+ (id)defaultReuseIdentifier;

- (void)setUpUI;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)updateConstraintConstants;

@end
