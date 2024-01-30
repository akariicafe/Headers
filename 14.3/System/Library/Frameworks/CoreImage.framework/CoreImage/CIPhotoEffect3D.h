@class CIImage, NSNumber;

@interface CIPhotoEffect3D : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDepthMap;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) NSNumber *inputGrainAmount;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)init;
- (id)cubeColorSpaceName;
- (int)_maxVersionBG;
- (id)backgroundCubeName;
- (id)applyCubeWithName:(id)a0 toImage:(id)a1;
- (id)_CIPhotoEffectDepthBlend;
- (id)backgroundCubePath;
- (int)_maxVersion;
- (int)_defaultVersion;
- (id)cubeName;
- (id)cubePath;
- (id)outputImage;
- (void)setDefaults;

@end
