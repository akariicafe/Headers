@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup {
    double _pointSize;
    double _lookedupScaleFactor;
    struct CGImage { } *_cgImageRef;
    double _fontMatchingScaleFactor;
    CUICatalog *_catalog;
    long long _layoutDirection;
    unsigned char _generatedImage : 1;
    unsigned char _flippable : 1;
}

@property (nonatomic) double fontMatchingScaleFactor;
@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) double capHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) BOOL isFlippable;
@property (readonly, nonatomic) float templateVersion;
@property (readonly, nonatomic) double baselineOffsetUnrounded;
@property (readonly, nonatomic) double capHeightUnrounded;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBoundsUnrounded;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectUnrounded;
@property (readonly, nonatomic) unsigned long long numberOfLayers;

+ (id)_knockoutStyleNames;
+ (id)_colorStyleNames;

- (double)scale;
- (id)knownAvailableVectorSizes;
- (double)_requestedPointSizeRatio;
- (struct CGImage { } *)_imageForTemplateRendering:(BOOL)a0 withColorResolver:(id /* block */)a1;
- (BOOL)_containsKnockoutStylesFromRendition:(id)a0;
- (void)_prepareDocumentfromRendition:(id)a0 withColorResolver:(id /* block */)a1;
- (id)_fillColorsOfStylesNamed:(id)a0 inDocument:(struct CGSVGDocument { } *)a1;
- (struct CGColor { } *)_fillColorOfStyle:(struct CGSVGAttributeMap { } *)a0;
- (struct CGImage { } *)_rasterizeFromRendition:(id)a0 imageUsingScaleFactor:(double)a1 forTargetSize:(struct CGSize { double x0; double x1; })a2;
- (void)_performWithLockedRendition:(id /* block */)a0;
- (void)_setFillColor:(struct CGColor { } *)a0 ofStyle:(struct CGSVGAttributeMap { } *)a1;
- (struct CGImage { } *)imageTintedWithColors:(id)a0;
- (struct CGImage { } *)imageWithColorResolver:(id /* block */)a0;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withColorResolver:(id /* block */)a2;
- (id)makeLayerTintedWithColors:(id)a0;
- (id)initWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 pointSize:(double)a3 fromCatalog:(id)a4 usingRenditionKey:(id)a5 fromTheme:(unsigned long long)a6;
- (id)makeLayerWithColorResolver:(id /* block */)a0;
- (struct CGSVGDocument { } *)referenceGlyph;
- (BOOL)generatedImage;
- (BOOL)layerAtIndexContainsColor:(unsigned long long)a0;
- (struct CGImage { } *)maskForLayerAtIndex:(unsigned long long)a0;
- (struct CGImage { } *)imageTintedWithColor:(struct CGColor { } *)a0;
- (id)makeLayerTintedWithColor:(struct CGColor { } *)a0;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withTintColors:(id)a2;
- (long long)layoutDirection;
- (void).cxx_destruct;
- (double)pointSize;
- (void)dealloc;
- (long long)glyphSize;
- (double)referencePointSize;
- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)glyphWeight;
- (id)debugDescription;
- (struct CGImage { } *)image;

@end
