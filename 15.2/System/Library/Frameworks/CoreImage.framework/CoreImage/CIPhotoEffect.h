@class CIImage;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (int)_maxVersion;
- (id)cubeName;
- (id)cubePath;
- (id)init;
- (id)cubeColorSpaceName;
- (int)_defaultVersion;

@end
