@class SBHCrossfadeAppLaunchSettings, SBHFolderCloseSettings, SBHUnlockSettings, SBHCrossfadeAppSuspendSettings, SBHLibraryPodOpenSettings, SBHLibraryPodCloseSettings, SBHCrossfadeAcceleratedAppSuspendSettings, SBHCenterAppLaunchSettings, SBHFolderOpenSettings, SBHReducedMotionFadeSettings, SBHCenterAppSuspendSettings, SBHCenterAcceleratedAppSuspendSettings;

@interface SBHIconAnimationRootSettings : PTSettings

@property (retain, nonatomic) SBHReducedMotionFadeSettings *reducedMotionSettings;
@property (retain, nonatomic) SBHUnlockSettings *unlockSettings;
@property (retain, nonatomic) SBHCenterAppLaunchSettings *centerLaunchSettings;
@property (retain, nonatomic) SBHCenterAppSuspendSettings *centerSuspendSettings;
@property (retain, nonatomic) SBHCenterAcceleratedAppSuspendSettings *centerAcceleratedSuspendSettings;
@property (retain, nonatomic) SBHCrossfadeAppLaunchSettings *crossfadeLaunchSettings;
@property (retain, nonatomic) SBHCrossfadeAppSuspendSettings *crossfadeSuspendSettings;
@property (retain, nonatomic) SBHCrossfadeAcceleratedAppSuspendSettings *crossfadeAcceleratedSuspendSettings;
@property (nonatomic) double maxAppSuspendHintProgress;
@property (nonatomic) double maxAppLaunchWallpaperScale;
@property (retain, nonatomic) SBHFolderOpenSettings *folderOpenSettings;
@property (retain, nonatomic) SBHFolderCloseSettings *folderCloseSettings;
@property (nonatomic) double maxFolderCloseHintProgress;
@property (retain, nonatomic) SBHLibraryPodOpenSettings *libraryPodOpenSettings;
@property (retain, nonatomic) SBHLibraryPodCloseSettings *libraryPodCloseSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
