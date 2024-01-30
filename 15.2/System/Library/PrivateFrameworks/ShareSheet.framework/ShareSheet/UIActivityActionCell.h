@class UIVisualEffectView, UIView;

@interface UIActivityActionCell : _UICollectionViewListCell

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;

@end
