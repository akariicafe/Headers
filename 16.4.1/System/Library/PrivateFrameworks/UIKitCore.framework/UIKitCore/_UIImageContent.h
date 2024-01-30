@class CUINamedVectorGlyph, UIImageSymbolConfiguration, UIBezierPath, CIImage;

@interface _UIImageContent : NSObject

@property (class, readonly, nonatomic) _UIImageContent *empty;

@property (readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInPixels;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) CIImage *CIImage;
@property (readonly, nonatomic) struct __IOSurface { } *IOSurface;
@property (readonly, nonatomic) struct CGPDFPage { } *CGPDFPage;
@property (readonly, nonatomic) struct CGSVGDocument { } *CGSVGDocument;
@property (readonly, nonatomic) double variableValue;
@property (readonly, nonatomic) UIImageSymbolConfiguration *_automaticSymbolConfiguration;
@property (readonly, nonatomic) double vectorScale;
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (nonatomic) BOOL isDecompressing;

- (BOOL)isCGImage;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (BOOL)isIOSurface;
- (id)initWithScale:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (id)contentPreparedForDisplay;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 namedColorResolver:(id /* block */)a3;
- (id)contentWithVariableValue:(double)a0;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 hierarchicalColorResolver:(id /* block */)a3;
- (BOOL)isVectorGlyph;
- (BOOL)containsNamedColorStyle:(id)a0;
- (BOOL)hasCGImage;
- (id)debugQuickLookObject;
- (BOOL)isCGPDFPage;
- (id)debugDescription;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsNamedColorStyles;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (unsigned long long)hash;
- (BOOL)_canProvideCGImageDirectly;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)isPreparedCGImage;
- (BOOL)isCGSVGDocument;
- (unsigned long long)numberOfHierarchyLayers;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 paletteColors:(id)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)canEmitDrawingCommands;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canDrawImage;
- (struct CGSize { double x0; double x1; })CGPDFPageSize;
- (struct CGSize { double x0; double x1; })CGSVGDocumentSize;
- (BOOL)isCGImageOnly;
- (BOOL)isCIImage;

@end
