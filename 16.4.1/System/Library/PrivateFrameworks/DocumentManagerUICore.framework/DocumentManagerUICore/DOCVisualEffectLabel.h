@class UIColor, NSString, UIFont, UILabel;

@interface DOCVisualEffectLabel : UIVisualEffectView

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UILabel *label;

- (id)font;
- (void)setFont:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (BOOL)adjustsFontForContentSizeCategory;
- (long long)lineBreakMode;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)text;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithEffect:(id)a0;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (void).cxx_destruct;

@end
