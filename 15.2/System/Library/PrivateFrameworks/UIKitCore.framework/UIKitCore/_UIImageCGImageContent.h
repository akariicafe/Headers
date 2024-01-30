@interface _UIImageCGImageContent : _UIImageContent {
    _Atomic struct CGImage *_imageRef;
}

- (id)renditionApplyingEffect:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (id)initWithCGImageSource:(struct CGImageSource { } *)a0 scale:(double)a1;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasCGImage;
- (BOOL)isCGImage;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (id)contentPreparedForDisplay;
- (struct CGImage { } *)CGImage;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
