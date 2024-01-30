@interface PFSemanticEnhancePregateCalculator : NSObject

+ (long long)semanticEnhanceSceneForPrivateClientMetadata:(id)a0;
+ (id)filterForSemanticEnhanceScene:(long long)a0;
+ (BOOL)isSemanticDevelopmentEnabledInCameraSettings;
+ (struct { long long x0; double x1; })semanticEnhanceSceneForCameraMetadata:(id)a0 ignoreCameraSetting:(BOOL)a1;
+ (struct { long long x0; double x1; })semanticEnhanceSceneForCameraMetadata:(id)a0;

@end
