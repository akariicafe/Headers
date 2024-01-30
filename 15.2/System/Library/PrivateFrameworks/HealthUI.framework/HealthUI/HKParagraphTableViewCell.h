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
- (id)_titleLabelFont;
- (id)_buttonFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setupUI;
- (long long)_buttonHorizontalAlignment;
- (id)_paragraphLabelFont;
- (double)_titleLabelTopToBaseline;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_subtitleLabelBaselineToButton;
- (double)_buttonBaselineToBottom;

@end
