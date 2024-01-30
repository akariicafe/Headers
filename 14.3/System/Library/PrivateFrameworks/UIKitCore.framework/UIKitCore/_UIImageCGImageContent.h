@interface _UIImageCGImageContent : _UIImageContent {
    _Atomic struct CGImage *_imageRef;
}

- (struct CGImage { } *)CGImage;
- (BOOL)hasCGImage;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)isCGImage;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)renditionApplyingEffect:(id)a0;

@end
