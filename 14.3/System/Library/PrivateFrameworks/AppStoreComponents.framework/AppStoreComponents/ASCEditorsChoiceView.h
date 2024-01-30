@class UIColor, UILabel;

@interface ASCEditorsChoiceView : UIView

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)editorsChoiceText;
+ (id)editorsChoiceFont;
+ (id)leftLaurel;
+ (id)rightLaurel;
+ (double)laurelPadding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
