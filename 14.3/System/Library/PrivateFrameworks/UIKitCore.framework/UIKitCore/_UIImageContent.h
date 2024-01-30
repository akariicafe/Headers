@class CIImage, CUINamedVectorGlyph;

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
@property (nonatomic) BOOL isDecompressing;

- (BOOL)hasCGImage;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)debugQuickLookObject;
- (id)initWithScale:(double)a0;
- (id)init;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)isCGImage;
- (BOOL)isCGPDFPage;
- (BOOL)isIOSurface;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (unsigned long long)hash;
- (BOOL)isCIImage;
- (BOOL)isCGSVGDocument;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)canProvideFullResCGImage;
- (struct CGSize { double x0; double x1; })CGSVGDocumentSize;
- (BOOL)isEqual:(id)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGImage { } *)_CGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)isVectorGlyph;
- (BOOL)canProvideCGImage;
- (id)debugDescription;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)isCGImageOnly;
- (struct CGSize { double x0; double x1; })CGPDFPageSize;
- (BOOL)_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 effect:(id)a2;

@end
