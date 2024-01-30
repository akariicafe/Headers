@class UIImage, TSUUIImageAutoreleasePoolGuard;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
    TSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)a0;
+ (void)i_performBlockWithUIImageLock:(id /* block */)a0;

- (long long)imageOrientation;
- (id)UIImage;
- (id)initWithContentsOfFile:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (struct CGImage { } *)CGImage;
- (double)scale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithUIImage:(id)a0;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)p_initWithUIImage:(id)a0 needsGuard:(BOOL)a1;

@end
