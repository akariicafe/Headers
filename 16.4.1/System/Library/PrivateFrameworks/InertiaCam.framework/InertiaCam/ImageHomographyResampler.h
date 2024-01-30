@interface ImageHomographyResampler : NSObject {
    double homographyMatrix[9];
}

- (id)init;
- (void)ClearOutOfBoundsPixels:(struct WorkingPixmapRecord { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer *x6; int x7; } *)a0;
- (struct __CVBuffer { } *)ResampleCVPixels:(struct __CVBuffer { } *)a0 clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (short)ResampleCVPixels:(struct __CVBuffer { } *)a0 clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2 toPixelBuffer:(struct __CVBuffer { } *)a3;
- (void)EraseCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct CGImage { } *)ResampleCGImage:(struct CGImage { } *)a0 clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)setHomographyMatrix:(double *)a0;

@end
