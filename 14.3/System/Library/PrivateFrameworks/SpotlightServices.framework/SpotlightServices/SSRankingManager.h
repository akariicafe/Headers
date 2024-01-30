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
+ (void)reloadSuggestionsRankingThresholds;
+ (void)reloadTopHitsParametersFromTrial;
+ (void)fetchDuetValues;
+ (void)reloadRankingParametersFromTrial;
+ (id)getSuggestionsRankingThresholds;
+ (void)reloadLocaleSpecificMatchingParameters;
+ (void)reloadRecencyThresholds;
+ (id)getCoreDuetValues;
+ (void)determineTopHitsForSafariSection:(id)a0 forQuery:(id)a1;
+ (id)keyForIntervalType:(long long)a0;
+ (void)reloadCommittedSearchParametersFromTrial;
+ (void)moveSafariTopHitsToTopOfSection:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (void)applyTopHitRankingPolicyToSection:(id)a0 topResultSection:(id)a1 maxTopHitCount:(long long)a2 isShortcut:(BOOL)a3;
- (id)removeBlockListedSectionsForMapping:(id)a0 withRankingConfiguration:(id)a1;
- (double)roundedValueForScore:(double)a0;
- (void)updateServerScoresUsingBlockOrder:(id)a0 bundleFeatures:(id)a1;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)a0;
- (void)addCEPValuesForTTR;
- (void)finalizeLog;
- (id)relativeRankWithAbsRank:(id)a0 numberValues:(unsigned long long)a1;
- (BOOL)sectionContainsOnlyStaleApps:(id)a0;
- (BOOL)sectionsContainsOnlyOneAppSection:(id)a0;
- (BOOL)sectionsContainsShortcutResult:(id)a0 shortcutResult:(id)a1;
- (id)makeTopHitSectionUsingSections:(id)a0 withItemRanker:(id)a1 sectionHeader:(id)a2 shortcutResult:(id)a3 isBullseyeNonCommittedSearch:(BOOL)a4 isBullseyeCommittedSearch:(BOOL)a5 parsecEnabled:(BOOL)a6 maxNumAppsInTopHitSection:(unsigned long long)a7;
- (id)removeBlockListedSectionsForMapping:(id)a0;
- (long long)compareDate:(id)a0 withDate:(id)a1;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)a0 withRanker:(id)a1 preferredBundleIds:(id)a2 isPeopleSearch:(BOOL)a3 isScopedAppSearch:(BOOL)a4 queryId:(unsigned long long)a5 isCJK:(BOOL)a6 isBullseyeNonCommittedSearch:(BOOL)a7 isBullseyeCommittedSearch:(BOOL)a8;
- (id)applyTopSectionPolicy:(id)a0 withTopHitSection:(id)a1 isPeopleSearch:(BOOL)a2 queryKind:(unsigned long long)a3 correction:(id)a4 queryLength:(unsigned long long)a5 ranker:(id)a6;
- (void)sendTTRLogsWithSections:(id)a0 searchString:(id)a1 queryKind:(unsigned long long)a2 isCommittedSearch:(BOOL)a3 parsecCameLaterThanSRT:(BOOL)a4;
- (id)groupSectionsByCategory:(id)a0 genreMap:(id)a1 topSections:(id)a2;
- (id)rankAppsAtTopForScopedSearchWithSections:(id)a0;
- (id)keyForSection:(id)a0;
- (void)updateWithNewRankingInfo:(id)a0;

@end
