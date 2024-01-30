@interface KNAnimationUtils : NSObject

+ (void)initialize;
+ (void)updateDefaultsValues;
+ (BOOL)isMotionBlurBlacklistedWithCapabilities:(id)a0;
+ (BOOL)isDiscreteGPUAquisitionDisabled;
+ (id)timingsArrayWithDirection:(unsigned long long)a0 duration:(double)a1 count:(unsigned long long)a2 chunkDuration:(double)a3 randomness:(double)a4 randomGenerator:(id)a5;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)a0;
+ (id)customAttributesArrayWithDeliveryOptions:(id)a0;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)a0;
+ (unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)a0;
+ (unsigned long long)randomDirection;
+ (unsigned long long)randomBasicDirection;
+ (BOOL)isFPSLoggingEnabled;
+ (BOOL)isFPSLoggingTimerDisabled;
+ (BOOL)isGLStateValidationEnabled;
+ (BOOL)isTexturePreCachingDisabled;
+ (BOOL)isMetalDisabled;
+ (BOOL)shouldBadgeMetalRendering;
+ (BOOL)isRenderingLocal;
+ (BOOL)isResponsivenessLoggingEnabled;
+ (BOOL)isDisplayLoggingEnabled;
+ (BOOL)isRandomNumberSeedInspectionEnabled;
+ (BOOL)isAnimationTestingEnabled;
+ (BOOL)isSOATSImageExportTestEnabled;
+ (BOOL)shouldForceDisplayPreferredMode;
+ (BOOL)isCustomEffectTimingCurveEditingEnabled;
+ (id)videoControllerSignpostLog;
+ (BOOL)isMotionBlurCapableWithAnimationContext:(id)a0;
+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize { double x0; double x1; })a0 inContainerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentsScale:(double)a2 isExternalDisplay:(BOOL)a3;
+ (void)getRecommendedPosition:(struct CGPoint { double x0; double x1; } *)a0 andTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a1 toFitLayer:(id)a2 inContainerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 contentsScale:(double)a4;
+ (void)hitPreviewButtonIfExists;
+ (BOOL)isDiscreteGPUNeededInShow:(id)a0;
+ (BOOL)shouldDisableViewScaling;

@end
