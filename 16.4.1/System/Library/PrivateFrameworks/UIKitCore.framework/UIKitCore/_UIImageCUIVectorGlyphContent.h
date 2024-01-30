@class _UIImageContent, CUINamedVectorGlyph;

@interface _UIImageCUIVectorGlyphContent : _UIImageContent {
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _vectorScale;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGImage { } *_overrideImageRef;
    _Atomic int _isMultiColor;
    _Atomic long long _numberOfHierarchyLayers;
}

@property (nonatomic) double glyphScaleFactor;

- (BOOL)isCGImage;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (double)variableValue;
- (struct CGImage { } *)CGImage;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 namedColorResolver:(id /* block */)a3;
- (id)contentWithVariableValue:(double)a0;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 hierarchicalColorResolver:(id /* block */)a3;
- (BOOL)isVectorGlyph;
- (BOOL)containsNamedColorStyle:(id)a0;
- (id)outlinePath;
- (id)initWithCUIVectorGlyph:(id)a0 scale:(double)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsNamedColorStyles;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (unsigned long long)hash;
- (id)vectorGlyph;
- (BOOL)_canProvideCGImageDirectly;
- (unsigned long long)numberOfHierarchyLayers;
- (double)vectorScale;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 paletteColors:(id)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (id)description;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)canEmitDrawingCommands;
- (void).cxx_destruct;
- (id)_automaticSymbolConfiguration;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canDrawImage;

@end
