@class CIImage;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (int)_defaultVersion;
- (void)setDefaults;
- (id)outputImage;
- (id)init;
- (int)_maxVersion;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end
