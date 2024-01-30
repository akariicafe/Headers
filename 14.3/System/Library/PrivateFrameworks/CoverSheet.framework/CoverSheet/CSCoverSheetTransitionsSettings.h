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

+ (id)settingsControllerModule;

- (void)setDefaultValuesForParallaxOnly;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)setDefaultValuesForParallaxAndBlur;
- (void)setDefaultValuesForBlurOnly;

@end
