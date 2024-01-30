@class CIImage;

@interface PITempTintFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) double inputTemperature;
@property (nonatomic) double inputTint;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (void)setInputVectorsForFilter:(id)a0;

@end
