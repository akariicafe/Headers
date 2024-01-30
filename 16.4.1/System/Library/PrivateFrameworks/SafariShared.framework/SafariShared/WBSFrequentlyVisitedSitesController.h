@class NSArray, WBSHistory, WBSFrequentlyVisitedSitesBannedURLStore;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;

+ (float)scoreForHistoryItem:(id)a0 atTime:(double)a1 withMinimumVisitCount:(unsigned long long)a2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)a0 historyItemForURLScoring:(id)a1 atTime:(double)a2 withMinimumVisitCount:(unsigned long long)a3;

- (void)clearFrequentlyVisitedSites;
- (id)_canonicalizedFavoritesURLStringSet;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;
- (void).cxx_destruct;
- (id)_frequentlyVisitedSitesURLStringSet;
- (id)initWithHistory:(id)a0 bannedURLStore:(id)a1;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;

@end
