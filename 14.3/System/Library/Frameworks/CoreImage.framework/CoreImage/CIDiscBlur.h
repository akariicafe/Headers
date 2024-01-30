@class CIImage, NSNumber, NSMutableArray;

@interface CIDiscBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSMutableArray *_recipe;
}

+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
