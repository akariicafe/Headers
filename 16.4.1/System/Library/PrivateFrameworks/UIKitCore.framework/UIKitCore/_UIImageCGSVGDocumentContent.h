@interface _UIImageCGSVGDocumentContent : _UIImageContent {
    struct CGSVGDocument { } *_svgDocumentRef;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isCGSVGDocument;
- (id)description;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)canEmitDrawingCommands;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithCGSVGDocument:(struct CGSVGDocument { } *)a0 scale:(double)a1;

@end
