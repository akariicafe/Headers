@class NSArray, UITextField, PUTopPeopleWallpaperSuggesterFilteringContext, UISwitch;

@interface PUTopPeopleWallpaperSuggesterDebugSettingsFilteringSettingsView : UIScrollView {
    PUTopPeopleWallpaperSuggesterFilteringContext *_filteringContext;
    NSArray *_persons;
    NSArray *_highlights;
}

@property (readonly) UITextField *normalizedDeviationForVeryImportantPersonsTextField;
@property (readonly) UITextField *normalizedDeviationForImportantPersonsTextField;
@property (readonly) UISwitch *favoritePersonsAreVIPsCheckBox;
@property (readonly) UITextField *minimumNumberOfCandidatesForEligiblePersonTextField;
@property (readonly) UITextField *timeIntervalForCandidateDedupingTextField;
@property (readonly) UISwitch *requiresSmileCheckBox;
@property (readonly) UISwitch *requiresNoBlinkCheckBox;
@property (readonly) UITextField *minimumFaceQualityTextField;
@property (readonly) UITextField *minimumFaceSizeTextField;
@property (readonly) UITextField *maximumFaceSizeTextField;
@property (readonly) UITextField *maximumFaceRollTextField;
@property (readonly) UITextField *minimumWallpaperScoreTextField;
@property (readonly) UITextField *minimumCropScoreTextField;

- (id)highlights;
- (void).cxx_destruct;
- (id)aspectRatios;
- (void)favoritePersonsAreVIPsChanged:(id)a0;
- (long long)indexOfRowWithPersonLocalIdentifiers:(id)a0;
- (id)initWithFilteringContext:(id)a0;
- (void)maximumFaceRollChanged:(id)a0;
- (void)maximumFaceSizeChanged:(id)a0;
- (void)minimumCropScoreChanged:(id)a0;
- (void)minimumFaceQualityChanged:(id)a0;
- (void)minimumFaceSizeChanged:(id)a0;
- (void)minimumNumberOfCandidatesForEligiblePersonChanged:(id)a0;
- (void)minimumWallpaperScoreChanged:(id)a0;
- (void)normalizedDeviationForImportantPersonsChanged:(id)a0;
- (void)normalizedDeviationForVeryImportantPersonsChanged:(id)a0;
- (void)requiresNoBlinkChanged:(id)a0;
- (void)requiresSmileChanged:(id)a0;
- (void)timeIntervalForCandidateDedupingChanged:(id)a0;

@end
