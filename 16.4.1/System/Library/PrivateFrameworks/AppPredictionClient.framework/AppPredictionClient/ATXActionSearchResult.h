@class ATXAction, ATXActionResponse, ATXHeroData, ATXProactiveSuggestion;

@interface ATXActionSearchResult : SFSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction;
@property (readonly, nonatomic) ATXHeroData *heroApp;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;

+ (id)_unarchiveObjectFromSuggestion:(id)a0;
+ (id)_demoModeActionResponse;
+ (BOOL)shouldDisplayValidParameterCombinations;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_demoModeEnabled;
+ (id)_unarchiveATXHeroDataFromSuggestion:(id)a0;
+ (id)mostRecentDonationParameterCombinations;
+ (id)actionResponseForDeveloperModeWithClientId:(id)a0 shouldShowRecentDonations:(BOOL)a1;
+ (id)actionResponseForDeveloperMode;
+ (BOOL)shouldDisplayRecentDonationsForTesting;
+ (id)actionSearchResultFromScoredAction:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)generatedSearchResultForProactiveSuggestion:(id)a0 actionResponse:(id)a1;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2 withClientModelId:(id)a3;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)a0 withClientModelId:(id)a1;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2;
+ (id)predictedActionSearchResultsWithLimit:(long long)a0 forBundleIdentifiers:(id)a1;
+ (BOOL)shouldDisplayRecentActionsOnHomeScreen;
+ (BOOL)shouldDisplayUpcomingMediaForTesting;
+ (id)recentUpcomingMedia;
+ (id)generatedSearchResultForAction:(id)a0 actionResponse:(id)a1;
+ (id)actionSearchResultFromProactiveSuggestion:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)recentDonationsStarting:(id)a0 end:(id)a1 number:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)_updateInlineCardWithContent:(id)a0;
- (BOOL)isEqualToActionSearchResult:(id)a0;
- (void)setAtxAction:(id)a0;
- (void)setHeroApp:(id)a0;
- (void)setProactiveSuggestion:(id)a0;

@end
