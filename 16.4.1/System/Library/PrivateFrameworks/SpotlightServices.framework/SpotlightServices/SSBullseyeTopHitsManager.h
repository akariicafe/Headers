@class SFMutableResultSection, SPSearchQueryContext, NSDictionary, PRSRankingItemRanker;

@interface SSBullseyeTopHitsManager : NSObject {
    NSDictionary *_categoryToResultMapping;
    long long _queryID;
    SFMutableResultSection *_topHitSection;
    BOOL _haveBullseyeTopHitSection;
    SPSearchQueryContext *_queryContext;
    long long _initiallyVisibleSectionSentCount;
    long long _initiallyHiddenSectionSentCount;
    PRSRankingItemRanker *_ranker;
}

+ (id)dedupeWebURLSuggestionsFromSections:(id)a0;

- (void).cxx_destruct;
- (id)tagOrFilterHiddenSectionsForClient:(id)a0 isCommittedSearch:(BOOL)a1 maxVisibleSections:(long long)a2 maxTopHitsCount:(int)a3 minThresholdForBigResult:(double)a4 topHitSection:(id *)a5;
- (id)bullseyeSectionForTopHit:(id)a0 initiallyHidden:(BOOL)a1 checkForTopHit:(BOOL)a2 thresholdCounter:(int)a3;
- (id)bullseyeTopHitSection;
- (id)bullseyeTopHitSections:(id)a0 maxTopHitsCount:(int)a1 minThresholdForBigResult:(double)a2 needExceptionForSafariSection:(BOOL)a3;
- (id)initWithQueryId:(long long)a0 categoryToResultMapping:(id)a1 currentTopHitSection:(id)a2 queryContext:(id)a3 ranker:(id)a4;
- (void)resetVisibilityCounts;

@end
