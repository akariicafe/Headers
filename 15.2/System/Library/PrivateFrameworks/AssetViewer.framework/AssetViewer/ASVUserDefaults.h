@interface ASVUserDefaults : NSObject

+ (void)setPreferencesValue:(id)a0 forKey:(struct __CFString { } *)a1;
+ (BOOL)wantsStatusBarHidden;
+ (BOOL)forceUseLegacyHitTestAPI;
+ (id)preferencesValueforKey:(struct __CFString { } *)a0 domain:(struct __CFString { } *)a1;
+ (BOOL)wantsAnimationDisabled;
+ (BOOL)wants2DOverlayControlsHidden;
+ (BOOL)wantsObjectPlacedWithoutPlane;
+ (id)defaultPlanePosition;
+ (BOOL)wantsOpenInObjectMode;
+ (BOOL)wantsParentToCameraInARAndEnableProbes;
+ (id)checkoutFragment;
+ (BOOL)allowCheckoutNonSecureHTML;
+ (BOOL)wantsPeopleOcclusionDisabled;
+ (BOOL)wantsTrackedRaycastStatus;
+ (BOOL)wantsShowLastPlacementResultTypeStatus;
+ (BOOL)wantsObjectFitToScreen;
+ (float)objectFitToScreenPercentage;
+ (BOOL)wantsRayTracedAmbientOcclusionEnabled;
+ (BOOL)wantsDebugActionsButton;
+ (BOOL)wantsTTRButton;
+ (BOOL)forceDisableRayTracedAmbientOcclusion;
+ (BOOL)wantsDebugVisualizationEnabled;
+ (BOOL)wantsDebugPhysicsEnabled;
+ (BOOL)wantsStatisticsShown;
+ (BOOL)wantsStatusPillHidden;
+ (double)triggerAffordanceShowDuration;
+ (BOOL)triggerAffordanceShouldReshowAfterArReset;
+ (BOOL)forceShowAnimationScrubber;
+ (id)overrideCameraStateSerializedString;
+ (BOOL)wantsDebugSceneUnderstandingEnabled;
+ (BOOL)forceDisableRealWorldOcclusion;
+ (BOOL)forceDisableRealWorldPhysics;
+ (BOOL)forceUseSceneReconstructionMeshForOrientation;
+ (BOOL)forceDisableShadowMaps;
+ (BOOL)forceDisableArKitVerticalRejection;
+ (BOOL)shouldRevertToOldHapticsBehavior;
+ (float)sceneIBLARIntensity;
+ (void)setPreferencesValueForKey:(struct __CFString { } *)a0 value:(const struct __CFString { } *)a1;
+ (id)preferencesValueforKey:(struct __CFString { } *)a0;

@end
