@class UIFont, NSString, UIColor, UILabel;

@interface SBUIActionViewLabel : UIView {
    NSString *_text;
    UIColor *_textColor;
    UILabel *_label;
    UILabel *_emojiLabel;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;
- (void)mt_removeAllVisualStyling;
- (void)_mt_applyVisualStyling:(id)a0;

@end
