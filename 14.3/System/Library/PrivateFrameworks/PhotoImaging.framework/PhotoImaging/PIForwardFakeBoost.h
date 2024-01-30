@class CIImage;

@interface PIForwardFakeBoost : CIFilter

@property double inputBoost;
@property (retain) CIImage *inputImage;

+ (id)kernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
