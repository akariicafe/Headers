@class NSString, UILabel, NSLayoutConstraint, UIButton;

@interface HKParagraphTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_paragraphLabel;
    UIButton *_button;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_paragraphLabelBaselineConstraint;
    NSLayoutConstraint *_buttonBaselineConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *paragraphText;
@property (copy, nonatomic) NSString *buttonText;

+ (id)reuseIdentifier;

- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)_titleLabelFont;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_buttonFont;
- (long long)_buttonHorizontalAlignment;
- (void)_setupUI;
- (double)_buttonBaselineToBottom;
- (id)_paragraphLabelFont;
- (double)_subtitleLabelBaselineToButton;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_titleLabelTopToBaseline;

@end
