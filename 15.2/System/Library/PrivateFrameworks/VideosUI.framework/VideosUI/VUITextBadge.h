@class UIColor, NSString, UIImage, NSAttributedString;

@interface VUITextBadge : UIView

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) int textBlendMode;
@property (nonatomic) double strokeSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } badgeInsets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) unsigned long long badgeStyle;

+ (id)attributedTextFromString:(id)a0 fontColor:(id)a1 fontSize:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_textSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 tintColor:(id)a1 fontSize:(double)a2 cornerRadius:(double)a3;
- (id)initWithAttributedString:(id)a0 tintColor:(id)a1 cornerRadius:(double)a2;

@end
