@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (void)setDefaults;
- (id)outputImage;
- (void)dealloc;
- (id)_kernel;
- (const char *)lumaTable;

@end
