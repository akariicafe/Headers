@class CIImage;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)init;
- (id)cubeColorSpaceName;
- (int)_maxVersion;
- (int)_defaultVersion;
- (id)cubeName;
- (id)cubePath;
- (id)outputImage;
- (void)setDefaults;

@end
