@interface PFSemanticEnhancePregateCalculator : NSObject

+ (id)filterForSemanticEnhanceScene:(long long)a0;
+ (struct { long long x0; double x1; })semanticEnhanceSceneForCameraMetadata:(id)a0;
+ (BOOL)isSemanticDevelopmentEnabledInCameraSettings;
+ (struct { long long x0; double x1; })semanticEnhanceSceneForCameraMetadata:(id)a0 ignoreCameraSetting:(BOOL)a1;
+ (long long)semanticEnhanceSceneForPrivateClientMetadata:(id)a0;

@end
