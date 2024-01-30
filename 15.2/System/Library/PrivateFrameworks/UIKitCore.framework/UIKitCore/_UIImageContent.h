@class CUINamedVectorGlyph, UIBezierPath, CIImage;

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
@property (readonly, nonatomic) double vectorScale;
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (nonatomic) BOOL isDecompressing;

- (id)renditionApplyingEffect:(id)a0;
- (id)debugQuickLookObject;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (BOOL)isVectorGlyph;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (BOOL)canScaleImageToTargetResolution;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasCGImage;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)isCGImage;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)canDrawImage;
- (id)contentPreparedForDisplay;
- (BOOL)isCIImage;
- (BOOL)isCGSVGDocument;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (BOOL)isCGPDFPage;
- (id)initWithScale:(double)a0;
- (BOOL)containsNamedColorStyle:(id)a0;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (unsigned long long)numberOfHierarchyLayers;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 effect:(id)a2;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (BOOL)isCGImageOnly;
- (struct CGSize { double x0; double x1; })CGPDFPageSize;
- (BOOL)isIOSurface;
- (unsigned long long)hash;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)containsNamedColorStyles;
- (id)debugDescription;
- (struct CGSize { double x0; double x1; })CGSVGDocumentSize;

@end
