@interface PUPhotoEditEffectsSupport : NSObject

+ (id)lightingEffectTypesByIdentifier;
+ (void)updateCompositionController:(id)a0 withEffect:(id)a1 intensity:(double)a2 updateVersion:(BOOL)a3;
+ (void)_clearPortraitEffectsWithCompositionController:(id)a0;
+ (void)_clearStandardEffectsWithCompositionController:(id)a0;
+ (void)_setEffectFilterName:(id)a0 withIntensity:(double)a1 withVersion:(unsigned long long)a2 forCompositionController:(id)a3;
+ (void)_setPortraitEffectEnabled:(BOOL)a0 forCompositionController:(id)a1;
+ (void)_setPortraitEffectFilterName:(id)a0 withVersion:(unsigned long long)a1 forCompositionController:(id)a2 portraitInfo:(id)a3 spillMatteAllowed:(id)a4;
+ (id)identifierForLightingType:(long long)a0 lightingVersion:(long long)a1;
+ (long long)lightingEffectTypeForIdentifier:(id)a0;
+ (void)updateCompositionController:(id)a0 withDepthEnabled:(BOOL)a1;
+ (void)updateCompositionController:(id)a0 withEffect:(id)a1 updateVersion:(BOOL)a2;
+ (void)updateCompositionController:(id)a0 withLightingIdentifier:(id)a1 portraitInfo:(id)a2 spillMatteAllowed:(id)a3;

@end
