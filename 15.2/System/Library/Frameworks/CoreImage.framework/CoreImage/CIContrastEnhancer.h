@class NSNumber, CIImage;

@interface CIContrastEnhancer : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputLocal;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)outputImage;

@end
