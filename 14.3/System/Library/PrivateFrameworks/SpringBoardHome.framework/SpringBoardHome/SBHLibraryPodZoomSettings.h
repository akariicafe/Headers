@class SBFAnimationSettings;

@interface SBHLibraryPodZoomSettings : SBHFolderZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *innerFolderEdgeZoomSettings;
@property (retain, nonatomic) SBFAnimationSettings *innerFolderCenterZoomSettings;

+ (id)_defaultCentralAnimationSettings;
+ (id)_defaultCrossfadeSettings;
+ (id)_defaultInnerFolderZoomAnimationSettings;
+ (double)_defaultInnerFolderZoomDelay;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
