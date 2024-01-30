@class _UIImageContent, CUINamedVectorGlyph;

@interface _UIImageCUIVectorGlyphContent : _UIImageCGImageContent {
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _vectorScale;
    struct CGSize { double width; double height; } _sizeInPixels;
}

@property (nonatomic) double glyphScaleFactor;

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)initWithScale:(double)a0;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage { } *)a0 CUIVectorGlyph:(id)a1 scale:(double)a2;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)canProvideFullResCGImage;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGImage { } *)_CGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)isVectorGlyph;
- (id)vectorGlyph;
- (double)vectorScale;

@end
