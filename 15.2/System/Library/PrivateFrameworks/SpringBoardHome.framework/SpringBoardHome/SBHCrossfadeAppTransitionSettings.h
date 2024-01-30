@class SBFAnimationSettings;

@interface SBHCrossfadeAppTransitionSettings : SBHCrossfadeZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *appSnapshotCornerRadiusSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
