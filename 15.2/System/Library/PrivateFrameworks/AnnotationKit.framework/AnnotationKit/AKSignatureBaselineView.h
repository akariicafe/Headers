@interface AKSignatureBaselineView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } lastSafeAreaInsets;
@property (nonatomic) double baselinePercent;

- (void)layoutSubviews;
- (BOOL)_isRTL;
- (double)scaleFactor;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)_drawBaselineInContext:(struct CGContext { } *)a0;

@end
