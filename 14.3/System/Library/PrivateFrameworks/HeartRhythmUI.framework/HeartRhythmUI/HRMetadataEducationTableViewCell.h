@class UILabel, NSString, NSLayoutConstraint;

@interface HRMetadataEducationTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) NSLayoutConstraint *topToTitleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleBaselineToBodyBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bodyBottomAnchorToBottomConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)a0;
- (id)_bodyLabelFont;
- (double)_topToTitleBaseline;
- (double)_titleBaselineToBodyBaseline;
- (double)_bodyBottomAnchorToBottom;
- (id)_titleLabelFontTextStyle;
- (id)_bodyLabelFontTextStyle;

@end
