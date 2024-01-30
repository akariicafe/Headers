@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject

@property (readonly, nonatomic) BWPhotoManifest *photoManifest;
@property (readonly, nonatomic) BOOL processIntelligentDistortionCorrection;
@property (readonly, nonatomic) BOOL provideDemosaicedRaw;

- (id)initWithPhotoManifest:(id)a0 processIntelligentDistortionCorrection:(BOOL)a1;
- (void)dealloc;

@end
