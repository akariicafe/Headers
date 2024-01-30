@interface GKImageEffects : NSObject

+ (id)imageByApplyingBlurToImage:(id)a0 withRadius:(double)a1 tintColor:(id)a2 saturationDeltaFactor:(double)a3 maskImage:(id)a4;
+ (id)imageByApplyingDarkEffectToImage:(id)a0;
+ (id)imageByApplyingExtraLightEffectToImage:(id)a0;
+ (id)imageByApplyingLightEffectToImage:(id)a0;
+ (id)imageByApplyingTintEffectWithColor:(id)a0 toImage:(id)a1;

@end
