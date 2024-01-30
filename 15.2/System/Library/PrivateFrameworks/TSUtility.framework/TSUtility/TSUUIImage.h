@class UIImage;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)a0 inBundle:(id)a1;

- (long long)imageOrientation;
- (id)UIImage;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (struct CGImage { } *)CGImage;
- (double)scale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithUIImage:(id)a0;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
