@interface _UIImageCGImageContent : _UIImageContent {
    _Atomic struct CGImage *_imageRef;
}

- (BOOL)isCGImage;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithCGImageSource:(struct CGImageSource { } *)a0 scale:(double)a1;
- (id)contentPreparedForDisplay;
- (struct CGImage { } *)CGImage;
- (BOOL)hasCGImage;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (id)description;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)canEmitDrawingCommands;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;

@end
