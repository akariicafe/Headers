@interface VKFrameProviderConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long cameraPreset;
@property (nonatomic) unsigned long long resolutionPreset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToFrameProviderConfiguration:(id)a0;

@end
