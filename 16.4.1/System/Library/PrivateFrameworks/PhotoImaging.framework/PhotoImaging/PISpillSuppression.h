@class CIVector, NSString, CIImage, NSNumber;

@interface PISpillSuppression : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMatteImage;
@property (retain, nonatomic) CIImage *inputTargetBackgroundImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIterations;
@property (retain, nonatomic) NSNumber *inputConstrainToAlpha;
@property (retain, nonatomic) NSNumber *inputAlphaThresholdLog10;
@property (retain, nonatomic) NSNumber *inputEpsilonLog10;
@property (retain, nonatomic) NSNumber *inputErosionRadius;
@property (retain, nonatomic) NSNumber *inputAlphaEdge;
@property (retain, nonatomic) NSNumber *inputEdgeRadius;
@property (retain, nonatomic) NSString *inputDebugChannels;
@property (retain, nonatomic) NSNumber *inputDebugSpillOnly;

+ (id)customAttributes;
+ (id)applySpillMatteKernel;
+ (id)prepareSpillMatteKernel;
+ (id)spillSuppressionKernels;

- (id)outputImage;
- (void).cxx_destruct;

@end
