@class NSString, CIImage, NSArray;

@interface PIFakeBoost : CIFilter

@property (class, readonly) NSString *currentVersion;

@property (retain) CIImage *inputImage;
@property double inputBoost;
@property (copy) NSString *inputVersion;
@property (copy) NSArray *inputParams;

+ (id)boostParametersFromRawProperties:(id)a0;
+ (id)kernelFB0;
+ (id)kernelFB3;

- (id)outputImage;
- (void).cxx_destruct;
- (id)outputImageFB0;
- (id)outputImageFB3;

@end
