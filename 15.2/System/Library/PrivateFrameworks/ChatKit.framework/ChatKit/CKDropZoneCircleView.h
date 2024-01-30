@class CAShapeLayer;

@interface CKDropZoneCircleView : UIView

@property (readonly, nonatomic) BOOL isAnimating;
@property (retain, nonatomic) CAShapeLayer *dropZoneShapeLayer;

- (void)layoutSubviews;
- (void)stopAnimating;
- (id)spinAnimation;
- (void)_updateShapeLayerStrokeColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)traitCollectionDidChange:(id)a0;

@end
