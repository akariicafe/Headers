@class CIImage;

@interface HMIDeltaEFilter : CIFilter

@property (readonly) CIImage *inputImage;
@property (readonly) CIImage *referenceImage;
@property (readonly) double threshold;

- (id)outputImage;
- (void).cxx_destruct;
- (id)initWithInputImage:(id)a0 referenceImage:(id)a1 threshold:(double)a2;

@end
