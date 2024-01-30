@class UIBezierPath, CAShapeLayer;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {
    BOOL _hasCustomStrokeColor;
    BOOL _hasCustomFillColor;
    CAShapeLayer *_lighteningOutline;
    double _outlineAlpha;
}

@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) UIBezierPath *customPath;
@property (nonatomic) double outlineAlpha;

+ (id)_fillColor:(BOOL)a0;
+ (id)_strokeColor:(BOOL)a0;
+ (Class)layerClass;

- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (id)_fillColor:(BOOL)a0;
- (id)_strokeColor:(BOOL)a0;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (double)lineWidth;
- (void)setLineWidth:(double)a0;
- (id)strokeColor;
- (id)fillColor;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_shapeLayer;
- (void)_updatePath;
- (void)setLineWidth:(double)a0 updatePath:(BOOL)a1;
- (void)_updateLightingOutlinePath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1;
- (double)_pathInset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
