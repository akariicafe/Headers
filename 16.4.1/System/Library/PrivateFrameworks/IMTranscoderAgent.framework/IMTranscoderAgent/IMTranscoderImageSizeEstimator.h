@interface IMTranscoderImageSizeEstimator : NSObject {
    struct CGSize { double width; double height; } _originalSize;
    double _normalizedInputFactor;
}

+ (id)newEstimatorWithURL:(id)a0 uti:(id)a1 imageSource:(struct CGImageSource { } *)a2;

- (double)_estimatedBytesPerPixelForJPEGQuality:(double)a0;
- (struct CGSize { double x0; double x1; })_newSizeForMaximumDimension:(long long)a0 originalSize:(struct CGSize { double x0; double x1; })a1;
- (double)_nominalBytesPerPixelForUTI:(id)a0;
- (double)_normalizedInputFactorForUTI:(id)a0 bytesPerPixel:(double)a1;
- (unsigned long long)estimatedSizeForOutputUTI:(id)a0 maximumDimension:(long long)a1 quality:(double)a2;
- (id)initWithUTI:(id)a0 imageSource:(struct CGImageSource { } *)a1;
- (id)initWithUTI:(id)a0 originalSize:(struct CGSize { double x0; double x1; })a1 fileSize:(unsigned long long)a2;

@end
