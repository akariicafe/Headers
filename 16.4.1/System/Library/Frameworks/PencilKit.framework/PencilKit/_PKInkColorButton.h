@class UIColor;

@interface _PKInkColorButton : UIButton

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) BOOL isUsedOnDarkBackground;

+ (id)strokeColorForStrokeShapeLayerWithColor:(id)a0 isUsedOnDarkBackground:(BOOL)a1;
+ (id)buttonWithColor:(id)a0 isCompact:(BOOL)a1;
+ (id)embossOverlayImageForColor:(id)a0 selected:(BOOL)a1 isCompact:(BOOL)a2;
+ (double)innerColorCircleInset:(BOOL)a0;
+ (id)pathForFillShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1 isCompact:(BOOL)a2;
+ (id)pathForSelectedColorShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1 embossed:(BOOL)a2 isCompact:(BOOL)a3;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1 color:(id)a2 isUsedOnDarkBackground:(BOOL)a3 isCompact:(BOOL)a4;
+ (double)swatchInsetForIsCompact:(BOOL)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swatchRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCompact:(BOOL)a1;
+ (double)transparentSelectionRingInset:(BOOL)a0;

- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)_swatchInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_swatchRect;
- (id)initWithColor:(id)a0 isCompact:(BOOL)a1;

@end
