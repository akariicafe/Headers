@class ATXAction, ATXHeroAppPrediction, ATXActionResponse, ATXProactiveSuggestion;

@interface ATXActionSearchResult : SFSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction;
@property (readonly, nonatomic) ATXHeroAppPrediction *heroApp;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;

+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)a0 withClientModelId:(id)a1;
+ (BOOL)shouldDisplayRecentDonationsForTesting;
+ (id)actionSearchResultFromProactiveSuggestion:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (BOOL)shouldDisplayValidParameterCombinations;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2;
+ (BOOL)supportsSecureCoding;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2 withClientModelId:(id)a3;
+ (id)predictedActionSearchResultsWithLimit:(long long)a0 forBundleIdentifiers:(id)a1;
+ (id)recentDonationsStarting:(id)a0 end:(id)a1 number:(unsigned long long)a2;
+ (BOOL)shouldDisplayRecentActionsOnHomeScreen;
+ (id)_unarchiveATXActionFromSuggestion:(id)a0;
+ (id)mostRecentDonationParameterCombinations;
+ (id)generatedSearchResultForAction:(id)a0 actionResponse:(id)a1;
+ (id)_unarchiveATXHeroAppPredictionFromSuggestion:(id)a0;
+ (id)_unarchiveObjectFromSuggestion:(id)a0;
+ (BOOL)_demoModeEnabled;
+ (id)actionSearchResultFromScoredAction:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)generatedSearchResultForProactiveSuggestion:(id)a0 actionResponse:(id)a1;
+ (id)_demoModeActionResponse;
+ (id)recentUpcomingMedia;
+ (id)actionResponseForDeveloperMode;
+ (BOOL)shouldDisplayUpcomingMediaForTesting;
+ (id)actionResponseForDeveloperModeWithClientId:(id)a0 shouldShowRecentDonations:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setAtxAction:(id)a0;
- (void)setProactiveSuggestion:(id)a0;
- (void)setHeroApp:(id)a0;
- (void)_updateInlineCardWithContent:(id)a0;
- (BOOL)isEqualToActionSearchResult:(id)a0;

@end
