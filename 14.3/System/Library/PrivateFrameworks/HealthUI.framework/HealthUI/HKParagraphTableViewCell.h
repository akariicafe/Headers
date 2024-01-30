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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)_setupUI;
- (id)initWithCoder:(id)a0;
- (id)_buttonFont;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_buttonHorizontalAlignment;
- (id)_paragraphLabelFont;
- (double)_titleLabelTopToBaseline;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_subtitleLabelBaselineToButton;
- (double)_buttonBaselineToBottom;

@end
