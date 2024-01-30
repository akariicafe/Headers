@class UILabel, NSString;

@interface HRBulletedIndentedLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)_setUpUI;
- (void)_setUpConstraints;
- (void)_updateLeadingDetailAttributedTextSize;

@end
