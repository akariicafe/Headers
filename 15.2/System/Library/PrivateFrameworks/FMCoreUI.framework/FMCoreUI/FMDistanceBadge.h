@class UIColor;

@interface FMDistanceBadge : UILabel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIColor *badgeColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)awakeFromNib;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)prepareForInterfaceBuilder;
- (void)_commonSetup;

@end
