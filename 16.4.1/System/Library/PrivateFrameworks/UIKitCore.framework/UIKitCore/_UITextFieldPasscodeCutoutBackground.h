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

+ (id)_strokeColor:(BOOL)a0;
+ (id)_fillColor:(BOOL)a0;
+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1;
- (id)_strokeColor:(BOOL)a0;
- (id)_fillColor:(BOOL)a0;
- (void)setLineWidth:(double)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (double)lineWidth;
- (id)fillColor;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (id)_shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setActive:(BOOL)a0;
- (id)strokeColor;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_pathInset;
- (void)_updateLightingOutlinePath;
- (void)_updatePath;
- (void)setLineWidth:(double)a0 updatePath:(BOOL)a1;

@end
