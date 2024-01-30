@interface CAMUserPreferencesMigrator : NSObject

+ (void)migrateLegacyPreferences;
+ (long long)_flashModeForLegacyFlashMode:(long long)a0;
+ (long long)_HDRModeForLegacyHDRMode:(long long)a0;
+ (long long)_captureModeForLegacyCameraMode:(long long)a0;
+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)a0;

@end
