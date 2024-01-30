@class SBFAnimationSettings;

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings

@property (nonatomic) double appHeadStart;
@property (retain, nonatomic) SBFAnimationSettings *appZoomSettings;
@property (retain, nonatomic) SBFAnimationSettings *appFadeSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
