@class CUIVectorGlyphGraphicVariantOptions;

@interface _CUIGraphicVariantVectorGlyph : CUINamedVectorGlyph

@property (retain, nonatomic) CUIVectorGlyphGraphicVariantOptions *options;

- (void)drawInContext:(struct CGContext { } *)a0;
- (double)baselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;
- (struct CGImage { } *)image;
- (unsigned long long)numberOfHierarchyLayers;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withColorResolver:(id /* block */)a2;
- (const struct CGPath { } *)CGPath;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withPaletteColors:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (void)drawHierarchyLayerAtIndex:(unsigned long long)a0 inContext:(struct CGContext { } *)a1 withColorResolver:(id /* block */)a2;
- (void)drawInContext:(struct CGContext { } *)a0 withPaletteColors:(id)a1;
- (void)drawMulticolorLayerAtIndex:(unsigned long long)a0 inContext:(struct CGContext { } *)a1 withColorResolver:(id /* block */)a2;
- (struct CGImage { } *)imageWithColorResolver:(id /* block */)a0;
- (struct CGImage { } *)imageWithHierarchyColorResolver:(id /* block */)a0;
- (struct CGImage { } *)imageWithPaletteColors:(id)a0;
- (unsigned long long)numberOfMulticolorLayers;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withHierarchyColorResolver:(id /* block */)a2;
- (void)drawPaletteLayerAtIndex:(unsigned long long)a0 inContext:(struct CGContext { } *)a1 withColorResolver:(id /* block */)a2;
- (id)graphicVariantWithOptions:(id)a0;
- (struct CGImage { } *)imageWithPaletteColorResolver:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interiorAlignmentRect;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withPaletteColorResolver:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundShapeBoundsForTargetSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)_containsWideGamutColor;
- (struct CGGradient { } *)_createBackgroundGradientWithColors:(id)a0;
- (struct CGImage { } *)_createBackgroundImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGPath { } *)_createBackgroundShapeInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1;
- (id)_createContentEffectsForTargetSize:(struct CGSize { double x0; double x1; })a0 scale:(double *)a1;
- (struct CGImage { } *)_createGraphicVariantImageAtScale:(double)a0 backgroundImage:(struct CGImage { } *)a1 symbolImage:(struct CGImage { } *)a2 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 disableColorFill:(BOOL)a4 outputScale:(double)a5;
- (id)_createShapeEffectsForTargetSize:(struct CGSize { double x0; double x1; })a0 scale:(double *)a1;
- (void)_drawBackgroundShapeInContext:(struct CGContext { } *)a0 targetSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (long long)_effectiveCenteringStyle;
- (id)_initWithBaseGlyph:(id)a0 options:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safeContentAreaBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safeContentAreaBoundsForBackgroundSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledContentRectForBackgroundSize:(struct CGSize { double x0; double x1; })a0 safeContentArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })_sizeOfBackgroundShape;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForTargetSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectUnrounded;
- (double)baselineOffsetUnrounded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsUnrounded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interiorAlignmentRectForTargetSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interiorAlignmentRectUnrounded;

@end
