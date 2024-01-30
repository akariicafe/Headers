@class CSCoverSheetFlyInSettings, CSCoverSheetTransitionSettings;

@interface CSCoverSheetTransitionsSettings : PTSettings

@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (retain, nonatomic) CSCoverSheetFlyInSettings *flyInSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperInitialTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperInitialTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperSubsequentTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperSubsequentTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *overAppTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *overLandscapeTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *inactiveOverAppTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *inactiveOverHomescreenTransitionSettings;
@property (nonatomic) double inPlaceTension;
@property (nonatomic) double inPlaceFriction;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setDefaultValuesForParallaxOnly;
- (void)setDefaultValuesForBlurOnly;
- (void)setDefaultValuesForFadeAndScale;
- (void)setDefaultValuesForParallaxAndBlur;
- (void)setDefaultValuesForBaseConfiguration;
- (void).cxx_destruct;

@end
