@class NSString, NSSet, NSMutableString, PRSRankingConfiguration;

@interface SSRankingManager : NSObject

@property (retain) NSString *query;
@property (retain) NSSet *allowedTopHitSections;
@property BOOL isCancelled;
@property (nonatomic) BOOL bullseyeRankingEnabled;
@property (retain, nonatomic) PRSRankingConfiguration *rankingConfiguration;
@property (retain, nonatomic) NSMutableString *logValues;
@property (nonatomic) double blendingTime;

+ (void)initialize;
+ (id)getCoreDuetValues;
+ (void)reloadSuggestionsRankingThresholds;
+ (void)reloadCommittedSearchParametersFromTrial;
+ (void)reloadRecencyThresholds;
+ (void)prepareTopHitsParametersForLanguage:(id)a0;
+ (void)reloadLocaleSpecificMatchingParameters;
+ (void)fetchDuetValues;
+ (void)reloadTopHitsParametersFromTrial;
+ (void)moveSafariTopHitsToTopOfSection:(id)a0;
+ (void)extractThresholdABValues:(id)a0 forLanguage:(id)a1;
+ (id)getSuggestionsRankingThresholds;
+ (void)determineTopHitsForSafariSection:(id)a0 forQuery:(id)a1;
+ (id)keyForIntervalType:(long long)a0;
+ (void)reloadRankingParametersFromTrial;

- (id)initWithQuery:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)CEPValuesForTTR;
- (void)addCEPValuesForTTR;
- (void)applyTopHitRankingPolicyToSection:(id)a0 topResultSection:(id)a1 maxTopHitCount:(long long)a2 isShortcut:(BOOL)a3;
- (id)applyTopSectionPolicy:(id)a0 withTopHitSection:(id)a1 isPeopleSearch:(BOOL)a2 queryKind:(unsigned long long)a3 correction:(id)a4 queryLength:(unsigned long long)a5 ranker:(id)a6;
- (long long)compareDate:(id)a0 withDate:(id)a1;
- (void)finalizeLog;
- (id)groupSectionsByCategory:(id)a0 genreMap:(id)a1 topSections:(id)a2;
- (id)keyForSection:(id)a0;
- (id)makeTopHitSectionUsingSections:(id)a0 withItemRanker:(id)a1 sectionHeader:(id)a2 shortcutResult:(id)a3 isBullseyeNonCommittedSearch:(BOOL)a4 isBullseyeCommittedSearch:(BOOL)a5 parsecEnabled:(BOOL)a6 maxNumAppsInTopHitSection:(unsigned long long)a7;
- (id)rankAppsAtTopForScopedSearchWithSections:(id)a0;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)a0 withRanker:(id)a1 preferredBundleIds:(id)a2 isScopedSearch:(BOOL)a3 queryId:(unsigned long long)a4 isCJK:(BOOL)a5 isBullseyeNonCommittedSearch:(BOOL)a6 isBullseyeCommittedSearch:(BOOL)a7 isPeopleSearch:(BOOL)a8;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)a0;
- (id)relativeRankWithAbsRank:(id)a0 numberValues:(unsigned long long)a1;
- (id)removeBlockListedSectionsForMapping:(id)a0;
- (id)removeBlockListedSectionsForMapping:(id)a0 withRankingConfiguration:(id)a1;
- (double)roundedValueForScore:(double)a0;
- (BOOL)sectionContainsOnlyStaleApps:(id)a0;
- (BOOL)sectionDoesNotContainMoreRecentlyUsedApps:(id)a0 lastUsedDate:(id)a1;
- (BOOL)sectionsContainsOnlyOneAppSection:(id)a0;
- (BOOL)sectionsContainsShortcutResult:(id)a0 shortcutResult:(id)a1;
- (void)sendTTRLogsWithSections:(id)a0 searchString:(id)a1 queryKind:(unsigned long long)a2 isCommittedSearch:(BOOL)a3 parsecCameLaterThanSRT:(BOOL)a4;
- (id)suggestionResultScoreWithFeatures:(id)a0 options:(id)a1;
- (void)updateServerScoresUsingBlockOrder:(id)a0 bundleFeatures:(id)a1;
- (void)updateWithNewRankingInfo:(id)a0;

@end
