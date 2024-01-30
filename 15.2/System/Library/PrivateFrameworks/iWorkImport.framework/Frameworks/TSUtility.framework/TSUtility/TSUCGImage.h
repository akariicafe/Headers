@interface TSUCGImage : TSUImage {
    struct CGImage { } *mCGImage;
    long long mOrientation;
    double mScale;
}

- (long long)imageOrientation;
- (struct CGSize { double x0; double x1; })size;
- (struct CGImage { } *)CGImage;
- (double)scale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
