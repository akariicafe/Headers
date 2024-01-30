@class CIImage, NSNumber, CIVector;

@interface CIKaleidoscope : CIFilter {
    CIImage *inputImage;
    NSNumber *inputCount;
    CIVector *inputCenter;
    NSNumber *inputAngle;
}

+ (id)customAttributes;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_outputExtent;
- (id)_kernel;
- (id)outputImage;

@end
