@class NSString, UILabel, NSLayoutConstraint, UIButton;

@interface HRParagraphTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *paragraphLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paragraphLabelBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewParagraphBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewButtonBottomConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *paragraphText;
@property (copy, nonatomic) NSString *buttonText;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)_setUpConstraints;
- (id)initWithCoder:(id)a0;
- (id)_buttonFont;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_buttonHorizontalAlignment;
- (id)_paragraphLabelFont;
- (double)_titleLabelTopToBaseline;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_subtitleLabelBaselineToButton;
- (void)_updateBottomConstraint;
- (id)_titleLabelFontTextStyle;
- (double)_lastViewToBottom;
- (id)_paragraphLabelFontTextStyle;
- (id)_buttonFontTextStyle;

@end
