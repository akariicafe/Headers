@class _UIImageContent, CUINamedVectorGlyph;

@interface _UIImageCUIVectorGlyphContent : _UIImageContent {
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _vectorScale;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGImage { } *_overrideImageRef;
    _Atomic id _isMultiColor;
    _Atomic id _numberOfHierarchyLayers;
}

@property (nonatomic) double glyphScaleFactor;

- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (BOOL)isVectorGlyph;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)isCGImage;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)canDrawImage;
- (id)initWithCUIVectorGlyph:(id)a0 scale:(double)a1;
- (double)vectorScale;
- (struct CGImage { } *)CGImage;
- (id)description;
- (id)initWithScale:(double)a0;
- (BOOL)containsNamedColorStyle:(id)a0;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (void).cxx_destruct;
- (id)outlinePath;
- (unsigned long long)numberOfHierarchyLayers;
- (BOOL)isEqual:(id)a0;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (id)vectorGlyph;
- (unsigned long long)hash;
- (void)dealloc;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)containsNamedColorStyles;

@end
