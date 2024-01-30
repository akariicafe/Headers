@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter {
    CIVector *inputNeutral;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputNeutral;
@property (retain, nonatomic) CIVector *inputTargetNeutral;

+ (id)customAttributes;

- (id)outputImage;
- (id)inputNeutral;
- (void)setInputNeutral:(id)a0;

@end
