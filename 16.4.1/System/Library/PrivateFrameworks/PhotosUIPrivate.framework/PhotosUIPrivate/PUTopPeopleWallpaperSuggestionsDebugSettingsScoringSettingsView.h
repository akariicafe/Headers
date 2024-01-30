@class UITextField, PUTopPeopleWallpaperSuggestionsScoringContext;

@interface PUTopPeopleWallpaperSuggestionsDebugSettingsScoringSettingsView : UIView {
    PUTopPeopleWallpaperSuggestionsScoringContext *_scoringContext;
}

@property (readonly) UITextField *favoriteFactorTextField;
@property (readonly) UITextField *aestheticFactorTextField;
@property (readonly) UITextField *peopleFactorTextField;
@property (readonly) UITextField *interactionFactorTextField;
@property (readonly) UITextField *meaningFactorTextField;
@property (readonly) UITextField *atHomeOrWorkFactorTextField;
@property (readonly) UITextField *maximumFaceSizeTextField;

- (void).cxx_destruct;
- (id)initWithScoringContext:(id)a0;
- (void)setAestheticFactor:(id)a0;
- (void)setAtHomeOrWorkFactor:(id)a0;
- (void)setFavoriteFactor:(id)a0;
- (void)setInteractionFactor:(id)a0;
- (void)setMaximumFaceSize:(id)a0;
- (void)setMeaningFactor:(id)a0;
- (void)setPeopleFactor:(id)a0;

@end
