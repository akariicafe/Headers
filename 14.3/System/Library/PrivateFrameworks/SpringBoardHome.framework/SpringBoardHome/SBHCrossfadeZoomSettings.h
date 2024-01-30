@class SBFAnimationSettings;

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings

@property (nonatomic) BOOL morphWithZoom;
@property (retain, nonatomic) SBFAnimationSettings *morphSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end
