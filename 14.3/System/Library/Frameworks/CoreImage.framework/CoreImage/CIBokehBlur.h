@class CIImage, NSNumber, NSMutableArray;

@interface CIBokehBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputRingAmount;
    NSNumber *inputRingSize;
    NSNumber *inputSoftness;
    NSMutableArray *_recipe;
}

+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
