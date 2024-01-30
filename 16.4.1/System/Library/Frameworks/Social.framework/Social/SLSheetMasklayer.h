@class UIColor, CALayer, _SLSheetMaskLayer;

@interface SLSheetMasklayer : CALayer {
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_bottomLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    UIColor *_backgroundColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastMaskRect;
}

@property (nonatomic) double clipCornerRadius;
@property (retain, nonatomic) UIColor *clipBackgroundColor;

- (void)removeAllAnimations;
- (void).cxx_destruct;
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSheetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (id)initWithBackgroundColor:(id)a0 cornerRadius:(double)a1;
- (void)removeSheetCutout;
- (void)restoreSheetCutout;
- (void)updateMaskWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
