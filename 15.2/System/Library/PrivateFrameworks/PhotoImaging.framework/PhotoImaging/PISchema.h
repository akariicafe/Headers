@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)photosSchema;
+ (id)sourceSelectSchema;
+ (id)rawSchema;
+ (id)rawNoiseReductionSchema;
+ (id)smartToneSchema;
+ (id)smartColorSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)grainSchema;
+ (id)sharpenSchema;
+ (id)cropSchema;
+ (id)trimSchema;
+ (id)slomoSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)muteSchema;
+ (id)videoPosterFrameSchema;
+ (id)autoLoopSchema;
+ (id)highResFusionSchema;
+ (id)depthEffectSchema;
+ (id)effect3DSchema;
+ (id)portraitEffectSchema;
+ (id)effectSchema;
+ (id)redEyeSchema;
+ (id)apertureRedEyeSchema;
+ (id)retouchSchema;
+ (id)vignetteSchema;
+ (id)orientationSchema;
+ (id)definitionSchema;
+ (id)noiseReductionSchema;
+ (id)whiteBalanceSchema;
+ (id)levelsSchema;
+ (id)curvesSchema;
+ (id)selectiveColorSchema;
+ (id)videoReframeSchema;
+ (id)videoStabilizeSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)debugSchema;
+ (id)semanticEnhance;
+ (id)portraitVideoSchema;
+ (id)photosCompositionSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)registerPhotosSchema;

@end
