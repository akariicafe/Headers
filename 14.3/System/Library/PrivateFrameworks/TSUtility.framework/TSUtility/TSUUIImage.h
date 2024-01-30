@class UIImage;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)a0 inBundle:(id)a1;

- (struct CGImage { } *)CGImage;
- (double)scale;
- (id)UIImage;
- (id)initWithContentsOfFile:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)imageOrientation;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithUIImage:(id)a0;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
