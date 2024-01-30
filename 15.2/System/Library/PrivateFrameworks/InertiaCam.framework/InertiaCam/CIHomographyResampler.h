@class CIImage, CIContext;

@interface CIHomographyResampler : ImageHomographyResampler {
    CIContext *_ctx;
    CIImage *_fillImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFillRect;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hightlightRect;

- (void).cxx_destruct;
- (id)init;
- (struct __CVBuffer { } *)ResampleCVPixels:(struct __CVBuffer { } *)a0 clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2 pixelBufferPool:(struct __CVPixelBufferPool { } *)a3;
- (short)ResampleCVPixels:(struct __CVBuffer { } *)a0 clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2 toPixelBuffer:(struct __CVBuffer { } *)a3;
- (void)updateBackgroundFill:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct __CVBuffer { } *)ResampleCVPixels:(struct __CVBuffer { } *)a0 clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2;

@end
