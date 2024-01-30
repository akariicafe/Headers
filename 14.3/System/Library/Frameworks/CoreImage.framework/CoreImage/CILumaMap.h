@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;
- (const char *)lumaTable;

@end
