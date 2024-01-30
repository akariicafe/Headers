@class UIImage, OITSUUIImageAutoreleasePoolGuard;

@interface OITSUUIImage : OITSUImage {
    UIImage *mUIImage;
    OITSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)a0;
+ (void)i_performBlockWithUIImageLock:(id /* block */)a0;

- (struct CGImage { } *)CGImage;
- (double)scale;
- (id)UIImage;
- (id)initWithContentsOfFile:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)imageOrientation;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithUIImage:(id)a0;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)p_initWithUIImage:(id)a0 needsGuard:(BOOL)a1;

@end
