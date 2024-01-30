@class NSArray, WBSHistory, WBSFrequentlyVisitedSitesBannedURLStore;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;

+ (float)scoreForHistoryItem:(id)a0 atTime:(double)a1 withMinimumVisitCount:(unsigned long long)a2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)a0 historyItemForURLScoring:(id)a1 atTime:(double)a2 withMinimumVisitCount:(unsigned long long)a3;
+ (float)scoreForHistoryItem:(id)a0 atTime:(double)a1;
+ (float)scoreWithHistoryItemForVisitScoring:(id)a0 historyItemForURLScoring:(id)a1 atTime:(double)a2;

- (void).cxx_destruct;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)a0;
- (float)_scoreForHistoryItem:(id)a0;
- (id)_canonicalizedFavoritesURLStringSet;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (id)initWithHistory:(id)a0 bannedURLStore:(id)a1;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;
- (void)clearFrequentlyVisitedSites;

@end
