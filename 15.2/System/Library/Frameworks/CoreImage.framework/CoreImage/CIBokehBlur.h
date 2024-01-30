@class CIImage, NSNumber, NSMutableArray;

@interface CIBokehBlur : CIFilter {
    NSNumber *inputRadius;
    NSNumber *inputRingAmount;
    NSNumber *inputRingSize;
    NSNumber *inputSoftness;
    NSMutableArray *_recipe;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;

@end
