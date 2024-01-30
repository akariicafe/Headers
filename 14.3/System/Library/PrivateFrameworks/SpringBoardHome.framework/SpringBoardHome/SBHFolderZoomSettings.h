@class SBFAnimationSettings;

@interface SBHFolderZoomSettings : SBHScaleZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *innerFolderFadeSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
