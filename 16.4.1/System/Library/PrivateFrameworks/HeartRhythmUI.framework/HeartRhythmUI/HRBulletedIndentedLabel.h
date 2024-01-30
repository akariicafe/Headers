@class UILabel, NSString;

@interface HRBulletedIndentedLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;

- (id)initWithText:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateLeadingDetailAttributedTextSize;

@end
