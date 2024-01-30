@class CAShapeLayer;

@interface CAMSlashView : UIView

@property (readonly, nonatomic) CAShapeLayer *_shapeLayer;
@property (nonatomic, getter=isVisible) BOOL visible;

+ (Class)layerClass;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateShapeLayerPath;
- (void)tintColorDidChange;
- (void)_updateShapeLayerProgressAnimated:(BOOL)a0;
- (void)_updateShapeLayerLineWidth;
- (void)_updateShapeLayerColor;

@end
