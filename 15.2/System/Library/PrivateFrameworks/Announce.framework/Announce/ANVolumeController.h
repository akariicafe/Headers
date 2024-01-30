@interface ANVolumeController : NSObject

+ (id)sharedController;

- (float)smartSiriVolume;
- (void)setVolumeWithOptions:(unsigned long long)a0;

@end
