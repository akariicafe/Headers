@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)_kernelNeg;
- (id)_kernelPos;
- (id)_initFromProperties:(id)a0;
- (id)outputImage;
- (id)_outputProperties;
- (BOOL)_isIdentity;

@end
