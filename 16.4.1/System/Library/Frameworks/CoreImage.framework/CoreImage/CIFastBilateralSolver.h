@class CIImage, NSNumber;

@interface CIFastBilateralSolver : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputConfidenceMapImage;
@property (copy, nonatomic) NSNumber *inputMaxNumVertices;
@property (copy, nonatomic) NSNumber *inputSigmaS;
@property (copy, nonatomic) NSNumber *inputSigmaRLuma;
@property (copy, nonatomic) NSNumber *inputSigmaRChroma;
@property (copy, nonatomic) NSNumber *inputLambda;
@property (copy, nonatomic) NSNumber *inputMaxNumIterations;

+ (id)customAttributes;

- (id)outputImage;

@end
