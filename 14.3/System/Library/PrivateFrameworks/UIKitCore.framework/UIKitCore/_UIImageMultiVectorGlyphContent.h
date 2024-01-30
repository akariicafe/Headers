@class NSArray;

@interface _UIImageMultiVectorGlyphContent : _UIImageContent {
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGPoint { double x; double y; } _anchorPoint;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)initWithScale:(double)a0;
- (BOOL)isCGImage;
- (void).cxx_destruct;
- (BOOL)canProvideFullResCGImage;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 glyphs:(id)a1 colors:(id)a2 offsets:(id)a3 scaleFactors:(id)a4 anchorPoint:(struct CGPoint { double x0; double x1; })a5;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isVectorGlyph;
- (BOOL)canProvideCGImage;
- (double)vectorScale;
- (BOOL)_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 effect:(id)a2;

@end
