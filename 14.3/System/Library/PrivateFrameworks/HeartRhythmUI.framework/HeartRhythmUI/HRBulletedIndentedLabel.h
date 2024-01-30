@class UILabel, NSString;

@interface HRBulletedIndentedLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)firstBaselineAnchor;
- (id)initWithText:(id)a0;
- (id)lastBaselineAnchor;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLeadingDetailAttributedTextSize;

@end
