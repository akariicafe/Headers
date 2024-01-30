@class SBFAnimationSettings;

@interface SBHCrossfadeAppTransitionSettings : SBHCrossfadeZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *appSnapshotCornerRadiusSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
