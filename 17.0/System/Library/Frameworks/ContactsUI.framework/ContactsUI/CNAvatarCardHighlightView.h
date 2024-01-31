@class CALayer, UIColor;

@interface CNAvatarCardHighlightView : UIView

@property (retain, nonatomic) CALayer *highlightLayer;
@property (retain, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) BOOL highlighted;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)_commonInit;

@end
