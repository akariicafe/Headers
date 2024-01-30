@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)grainSchema;
+ (id)portraitVideoSchema;
+ (id)photosCompositionSchema;
+ (id)trimSchema;
+ (id)highResFusionSchema;
+ (id)selectiveColorSchema;
+ (id)muteSchema;
+ (id)curvesSchema;
+ (id)retouchSchema;
+ (id)portraitEffectSchema;
+ (id)whiteBalanceSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)slomoSchema;
+ (id)sourceSelectSchema;
+ (id)debugSchema;
+ (id)apertureRedEyeSchema;
+ (id)videoPosterFrameSchema;
+ (id)semanticEnhance;
+ (id)smartColorSchema;
+ (id)rawNoiseReductionSchema;
+ (id)depthEffectSchema;
+ (id)redEyeSchema;
+ (id)effectSchema;
+ (id)orientationSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)vignetteSchema;
+ (id)videoStabilizeSchema;
+ (id)registerPhotosSchema;
+ (id)rawSchema;
+ (id)videoReframeSchema;
+ (id)effect3DSchema;
+ (id)levelsSchema;
+ (id)photosSchema;
+ (id)definitionSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)autoLoopSchema;
+ (id)cropSchema;
+ (id)smartToneSchema;
+ (id)noiseReductionSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)sharpenSchema;

@end
