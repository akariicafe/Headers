@class CIImage, CIVector, NSNumber;

@interface RAWLensCorrectionDNG : RAWFilter {
    CIImage *inputImage;
    CIVector *inputKr;
    CIVector *inputKt;
    CIVector *inputCenter;
    id inputColorSpace;
    NSNumber *inputDraftMode;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0 info:(id)a1;

@end
