@class UIImage;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)a0 inBundle:(id)a1;

- (id)initWithData:(id)a0;
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

@end
