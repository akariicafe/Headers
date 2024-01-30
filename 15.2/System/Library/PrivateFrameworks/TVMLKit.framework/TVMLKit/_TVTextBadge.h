@class NSString, NSAttributedString, UIColor;

@interface _TVTextBadge : UIView

@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double lineWidth;

+ (id)textBadgeViewWithElement:(id)a0 existingView:(id)a1;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
