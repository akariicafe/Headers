@interface OITSUCGImage : OITSUImage {
    struct CGImage { } *mCGImage;
    long long mOrientation;
    double mScale;
}

- (struct CGImage { } *)CGImage;
- (long long)imageOrientation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)scale;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
