@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (const char *)lumaTable;
- (void)dealloc;
- (id)_kernel;

@end
