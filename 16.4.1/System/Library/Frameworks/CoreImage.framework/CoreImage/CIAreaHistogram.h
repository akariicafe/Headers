@class CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputCount;

+ (id)customAttributes;

- (id)outputImage;
- (id)outputData;
- (BOOL)_inputsAreOK;
- (struct IRect { struct IPoint { long long x0; long long x1; } x0; struct ISize { unsigned long long x0; unsigned long long x1; } x1; })_netExtent;
- (id)outputImageMPS;
- (id)outputImageNonMPS;

@end
