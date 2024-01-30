@class UIImage, TSUUIImageAutoreleasePoolGuard;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
    TSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)a0;
+ (void)i_performBlockWithUIImageLock:(id /* block */)a0;

- (id)initWithContentsOfFile:(id)a0;
- (struct CGImage { } *)CGImage;
- (long long)imageOrientation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)scale;
- (struct CGSize { double x0; double x1; })size;
- (id)UIImage;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithUIImage:(id)a0;
- (id)p_initWithUIImage:(id)a0 needsGuard:(BOOL)a1;

@end
