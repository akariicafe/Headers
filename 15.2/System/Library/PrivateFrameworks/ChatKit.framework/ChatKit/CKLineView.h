@class CABackdropLayer, CAShapeLayer;

@interface CKLineView : UIView

@property (retain, nonatomic) CABackdropLayer *backdropFilterLayer;
@property (retain, nonatomic) CAShapeLayer *lineShapeLayer;
@property (nonatomic) BOOL shouldUseDarkFSMStrokeColor;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)clearFilters;

@end
